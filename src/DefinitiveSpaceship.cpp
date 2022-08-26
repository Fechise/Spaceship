/**
 * Copyright, todos los derechos reservados 2022 - EPN.
 * Juego de Spaceship
 * @author: Andrés Q.
 * @date: 25/08/2022
**/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <cstdio>
#include <limits> //Limites de los tipos de variables

#include "../lib/utility.h"

//Número ASCII de las teclas izquierda y derecha en el teclado
#define IZQUIERDA 75
#define DERECHA 77

using namespace std;

/*
    DECLARACIÓN DE VARIABLES
*/

//Dibujos de las formas
char nave_punta[]  = {' ', ' ', ' ', '^', ' ', ' ', ' ', 0};
char nave_cuerpo[] = {' ', '/', ':', 'o', ':', '\\', ' ', 0};
char nave_cola[]   = {'/', ':', 'o', '.', 'o', ':', '\\', 0};

char explosion_I1[] = {' ', ' ', ' ', '*', ' ', ' ', ' ', 0};
char explosion_I2[] = {' ', ' ', '*', '*', '*', ' ', ' ', 0};
char explosion_I3[] = {' ', ' ', ' ', '*', ' ', ' ', ' ', 0};

char explosion_F1[] = {' ', '*', ' ', '*', ' ', '*', ' ', 0};
char explosion_F2[] = {' ', ' ', '*', ' ', '*', ' ', ' ', 0};
char explosion_F3[] = {' ', '*', ' ', '*', ' ', '*', ' ', 0};

//Para hacer un reseteo en las lineas de la nave
char borrar_nave[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', 0};

//Interfaz
int vidas     = 3;
int corazones = 3;
int repeticion = 8;
int nivel = 1;
bool condicion = false;

//Coordenadas nave
int ix = 60, iy = 19;

//Coordenadas asteroides
int x1 = 12,  yy = 15;
int x2 = 36,  y2 = 5;
int x3 = 58,  y3 = 7;
int x4 = 105, y4 = 9;
int x5 = 110, y5 = 12;
int x6 = 75,  y6 = 10;
int x7 = 26,  y7 = 13;
int x8 = 40,  y8 = 11;
int x9 = 86,  y9 = 4;
int x10 = 90, y10 = 5;
int x11 = 15, y11 = 8;
int x12 = 23, y12 = 8;



/**
 * caratula: Muestra en la terminal la pantalla de inicio del juego.  
**/
void caratula()
{
    system("color 0e");
    dibujarS1();
    Beep(400, 100);
    
    system("color 07");
    dibujarP1();
    Beep(400, 500);
    
    estrellasCaratula1();

    system("color 0e");
    dibujarA();
    Beep(500, 500);
    
    system("color 07");
    dibujarC();
    Beep(500, 500); 
    
    estrellasCaratula2();

    system("color 0e");
    dibujarE();
    Beep(600, 500);
    
    system("color 07");
    dibujarS2();
    Beep(650, 500);
    
    estrellasCaratula3();

    system("color 0e");
    dibujarH();
    Beep(660, 500);
    
    system("color 07");
    dibujarI();
    Beep(680, 500); 
    
    estrellasCaratula4();

    system("color 0e");
    dibujarP2(); Beep(500, 1500);
    
    system("color 07");
    //Beep(150, 1500);
    dibujarCargando();
    borrarLineaX(1, 15);
    dibujarListo();
    
    system("color 1f");
    Beep(500, 500);
    system("color 20");
    Beep(600, 500);
    system("color 4e");
    Beep(650, 500);
    system("color 0a");
    Beep(784, 500);

    borrarLineaX(1, 15);
    dibujarEnter();
    getch();
}

/**
 * dibujarInstrcciones: Muestra en la terminal la pantalla de instrucciones. 
**/
void dibujarInstrucciones()
{
    int B = 500;

    system("cls");
    system("color 03");

    Sleep(1000);
    gotoxy(10, 4); cout << "* C O M O  S E  J U E G A *";
    Beep(300,500);
    Sleep(1000);

    gotoxy(10, 6); cout << "Tienes 3 vidas."; Sleep(B);
    gotoxy(10, 7); cout << "Cada una con 3 corazones."; Sleep(B);

    gotoxy(10, 9); cout << "Se pierde cuando se llega a 0 vidas."; Sleep(B);

    gotoxy(10, 11); cout << "¤ ← Estos son asteroides. Evitalos."; Sleep(B);
    gotoxy(10, 12); cout << "Te quitaran un corazon."; Sleep(B);

    gotoxy(52, 6); cout << "Controles: ";Sleep(B);

    gotoxy(52, 8); cout << "Flecha";Sleep(B);
    gotoxy(50, 9); cout << "Izquierda";Sleep(B);
    dibujarFlechaIzq();
    gotoxy(60, 8); cout << "Flecha";Sleep(B);
    gotoxy(60, 9); cout << "Derecha";Sleep(B);
    dibujarFlechaDer();

    Beep(250,50);
    gotoxy(10, 15); cout << "Presiona ENTER para continuar";Sleep(B);
    getch();

    system("color 07");
}

/**
 * posicionVidas: Ubicar en la terminal las vidas.
 
 * @param vi Cantidad de vidas  
**/
void posicionVidas(int vi)
{
    gotoxy(2, 1);
    cout << "VIDAS " << vi;
}

/**
 * mostrarCorazones: Ubicar en la terminal los corazones.
 
 * @param s Cantidad de corazones  
**/
void mostrarCorazones(int s)
{
    gotoxy(116, 1);
    cout << " ";

    gotoxy(117, 1);
    cout << " ";

    gotoxy(118, 1);
    cout << " ";

    for (int i = 0; i < s; i++)
    {
        gotoxy(116+i, 1);
        SetConsoleOutputCP(CP_UTF8);
        printf("♥");
    }
}

/**
 * accionExplosion: Hace una animación de una explosión, al imprimir 3 veces las formas.  
**/
void accionExplosion()
{
    system("color 06");
    gotoxy(ix, iy);
    puts(explosion_I1);
    gotoxy(ix, iy+1);
    puts(explosion_I2);
    gotoxy(ix, iy+2);
    puts(explosion_I3);

    Sleep(380);

    gotoxy(ix, iy);
    puts(explosion_F1);
    gotoxy(ix, iy+1);
    puts(explosion_F2);
    gotoxy(ix, iy+2);
    puts(explosion_F3);

    Sleep(390);

    gotoxy(ix, iy);
    puts(nave_punta);
    gotoxy(ix, iy+1);
    puts(nave_cuerpo);
    gotoxy(ix, iy+2);
    puts(nave_cola);

    Sleep(390);
    system("color 07");
}

/**
 * aleatorizarAsteroide: Cambia la coordenada y del asteroide, para que no salga de pantalla; al mismo tiempo, que da un valor cualquiera para la coordenada x.
 * @param &x Coordenada en x, referencia al espacio de x en main
 * @param &y Coordenada en y, referencia al espacio de y en main
**/
void aleatorizarAsteroide(int &x, int &y)
{
    if(y > 25)
    {
        y = 4;
        x = (rand() % 119) + 2;
    }
}

/**
 * gameplay: Proceso mas importante, aqui se mueve la nave por las teclas. Los asteroides reciben su rutina. Se establece que pasa cuando se pierden todos los corazones.
**/
void gameplay()
{
    //Rutina asteroides, se pueden agregar más.
    
    int decision;
    
    gotoxy(x1, yy); cout << "¤";
    gotoxy(x2, y2); cout << "¤";
    gotoxy(x3, y3); cout << "¤";
    gotoxy(x4, y4); cout << "¤";
    gotoxy(x5, y5); cout << "¤";
    gotoxy(x6, y6); cout << "¤";
    gotoxy(x7, y7); cout << "¤";
    gotoxy(x8, y8); cout << "¤";
    gotoxy(x9, y9); cout << "¤";
    gotoxy(x10, y10); cout << "¤";
    gotoxy(x11, y11); cout << "¤";
    gotoxy(x12, y12); cout << "¤";

    Sleep(70);

    gotoxy(x1, yy); cout << " ";
    gotoxy(x2, y2); cout << " ";
    gotoxy(x3, y3); cout << " ";
    gotoxy(x4, y4); cout << " ";
    gotoxy(x5, y5); cout << " ";
    gotoxy(x6, y6); cout << " ";
    gotoxy(x7, y7); cout << " ";
    gotoxy(x8, y8); cout << " ";
    gotoxy(x9, y9); cout << " ";
    gotoxy(x10, y10); cout << " ";
    gotoxy(x11, y11); cout << " ";
    gotoxy(x12, y12); cout << " ";
    
    aleatorizarAsteroide(x1, yy);
    aleatorizarAsteroide(x2, y2);
    aleatorizarAsteroide(x3, y3);
    aleatorizarAsteroide(x4, y4);
    aleatorizarAsteroide(x5, y5);
    aleatorizarAsteroide(x6, y6);
    aleatorizarAsteroide(x7, y7);
    aleatorizarAsteroide(x8, y8);
    aleatorizarAsteroide(x9, y9);
    aleatorizarAsteroide(x10, y10);
    aleatorizarAsteroide(x11, y11);
    aleatorizarAsteroide(x12, y12);

    //Rutina nave

    if(kbhit())
    {
        unsigned char tecla = getch();

        switch (tecla)
        {
            case IZQUIERDA:
                if(ix > 1)
                {
                    gotoxy(ix, iy); puts(borrar_nave);
                    gotoxy(ix, iy+1); puts(borrar_nave);
                    gotoxy(ix, iy+2); puts(borrar_nave);

                    ix -= 2; //ix = ix-2

                    gotoxy(ix, iy); puts(nave_punta);
                    gotoxy(ix, iy+1); puts(nave_cuerpo);
                    gotoxy(ix, iy+2); puts(nave_cola);
                }
                break;

            case DERECHA:

                if (ix < 119)
                {
                    gotoxy(ix, iy); puts(borrar_nave);
                    gotoxy(ix, iy+1); puts(borrar_nave);
                    gotoxy(ix, iy+2); puts(borrar_nave);

                    ix += 2; //ix = ix-2

                    gotoxy(ix, iy); puts(nave_punta);
                    gotoxy(ix, iy+1); puts(nave_cuerpo);
                    gotoxy(ix, iy+2); puts(nave_cola);
                }
                break;

            //default:
                //break;
        }
    }

    //Contacto con los asteroides

    if((x1 > ix-1 && x1 < ix+8 && yy == iy-1) || (x2 > ix-1 && x2 < ix     +8 && y2 == iy-1)
        || (x3 > ix-1 && x3 < ix+8 && y3 == iy-1)  || (x4 > ix-1 && x4 < ix+8 && y4 == iy-1) 
        || (x5 > ix-1 && x5 < ix+8 && y5 == iy-1)  || (x6 > ix-1 && x6 < ix+8 && y6 == iy-1) 
        || (x7 > ix-1 && x7 < ix+8 && y7 == iy-1)  || (x8 > ix-1 && x8 < ix+8 && y8 == iy-1 ) || (x9 > ix-1 && x9 < ix+8 && y9 == iy-1 )  || (x10 > ix-1 && x10 < ix+8 && y10 == iy-1 ) || (x11 > ix-1 && x11 < ix+7 && y11 == iy-1 ) || (x12 > ix-1 && x12 < ix+7 && y11 == iy-1 )) //Intervalo de espacios de la nave
        {
            corazones --;
            mostrarCorazones(corazones);
            Beep(650, 500);
        }

    gotoxy(ix, iy); puts(nave_punta);
    gotoxy(ix, iy+1); puts(nave_cuerpo);
    gotoxy(ix, iy+2); puts(nave_cola);

    if(corazones == 0)
    {
        vidas--;
        posicionVidas(vidas);
        accionExplosion();
        corazones = 3;

        mostrarCorazones(corazones);
    }

    yy++; y2++; y3++; y4++; y5++; y6++; y7++; y8++, y9++, y10++, y11++, y12++;
}

/**
 * perder: Se establece que pasa cuando se pierden todas las vidas.
 * @param &decision Se usa la variable decisión que está en main, se refiere a ese espacio, para que cambie en main.
**/
void perder(string &decision)
{
    string h = "1";
    string k = "2";
    
    system("color 0c");
    system("cls");
    Beep(300, 100);
    gotoxy(58, 9);  cout << "x   x"; Sleep(500);
    Beep(300, 100);
    gotoxy(58, 10); cout << "  -  "; Sleep(500);
    gameOver();
    dibujarMarco();
    gotoxy(53, 14); cout << "Jugar de nuevo?";
    gotoxy(53, 15); cout << "1 - Si | 2 - No";
        
    gotoxy(54, 16); cout << "Tu decision: ";
    do
    {
    gotoxy(67, 16);cin >> decision;

    if (decision == "1")
    {
        gotoxy(57, 19); cout << "Sigue jugando"; Sleep(A);
        vidas = 3;
        corazones = 3;
        gotoxy(x1, yy); cout << "¤";
        gotoxy(x2, y2); cout << "¤";
        gotoxy(x3, y3); cout << "¤";
        gotoxy(x4, y4); cout << "¤";
        gotoxy(x5, y5); cout << "¤";
        gotoxy(x6, y6); cout << "¤";
        gotoxy(x7, y7); cout << "¤";
        gotoxy(x8, y8); cout << "¤";
        gotoxy(x9, y9); cout << "¤";
        gotoxy(x10, y10); cout << "¤";
        gotoxy(x11, y11); cout << "¤";
        gotoxy(x12, y12); cout << "¤";
        break;
    }
    
    if (decision == "2")
    {
        gotoxy(57, 19); cout << "No sigue jugando";
        exit(1);
    }
    } while(decision != "1" || decision != "2");
        
}

int main()
{    
    int indicador = 3;
    string decision;

    
    getch();
    do
    {
    system("cls");
    caratula();    
    dibujarInstrucciones();
    
    system("cls");
    system("color 07");

    posicionVidas(vidas);
    mostrarCorazones(corazones);

    gotoxy(ix, iy); puts(nave_punta);
    gotoxy(ix, iy+1); puts(nave_cuerpo);
    gotoxy(ix, iy+2); puts(nave_cola);

    while(vidas > 0)
        gameplay();

    if(vidas == 0)
        Beep(300, 3000);
        perder(decision);
        
    
    }while( indicador > 2 );


    getch();
    return 0;
}