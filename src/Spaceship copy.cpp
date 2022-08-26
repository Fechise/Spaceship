#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <cstdio>
//#include "caratula.cpp"
#include "../lib/utility.h"

#define IZQUIERDA 75
#define DERECHA 77

int ctrl = 0;
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
int vidas     = 1;
int corazones = 3;
int repeticion = 8;
int nivel = 1;
bool condicion = false;

//Coordenadas nave
int ix = 60, iy = 19;

//Coordenadas asteroides
int x1 = 12, yy = 8;
int x2 = 36, y2 = 12;
int x3 = 58, y3 = 6;
int x4 = 105, y4 = 9;
int x5 = 110, y5 = 13;
int x6 = 75, y6 = 7;
int x7 = 40, y7 = 10;

//Variables auxiliares
int h, k;

// int elegirOpcion(int &ctrl)
// {
//     int h;
//     //int ctrl;
//     switch (h)
//     {
//     case 1:
//         ctrl == 3;
//         return ctrl;
//         break;
    
//     case 2:
//         ctrl == 0;
//         return ctrl;
//         break;
//     }

//     return ctrl;
// };

// void elegirOpcion1()
// {
//     int h;
//     do
//     {
//         cin >> h;
//     } while (h != 1 || h != 2);
// }

void caratula();

//Ubicar en la terminal las vidas
void posicionVidas(int vi)
{
    gotoxy(2, 1);
    cout << "VIDAS " << vi;
}

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

void accionExplosion()
{
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
}

void aleatorizarAsteroide(int &x, int &y)
{
    if(y > 25)
    {
        y = 4;
        x = (rand() % 119) + 2;
    }
}

void gameplay()
{
    //Rutina asteroides, se pueden agregar más.
    
    int decision;
    
    do{
    gotoxy(x1, yy); cout << "¤";
    gotoxy(x2, y2); cout << "¤";
    gotoxy(x3, y3); cout << "¤";
    gotoxy(x4, y4); cout << "¤";
    gotoxy(x5, y5); cout << "¤";
    gotoxy(x6, y6); cout << "¤";
    gotoxy(x7, y7); cout << "¤";

    Sleep(70);

    gotoxy(x1, yy); cout << " ";
    gotoxy(x2, y2); cout << " ";
    gotoxy(x3, y3); cout << " ";
    gotoxy(x4, y4); cout << " ";
    gotoxy(x5, y5); cout << " ";
    gotoxy(x6, y6); cout << " ";
    gotoxy(x7, y7); cout << " ";
    
    aleatorizarAsteroide(x1, yy);
    aleatorizarAsteroide(x2, y2);
    aleatorizarAsteroide(x3, y3);
    aleatorizarAsteroide(x4, y4);
    aleatorizarAsteroide(x5, y5);
    aleatorizarAsteroide(x6, y6);
    aleatorizarAsteroide(x7, y7);

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

    if(    (x1 > ix-1 && x1 < ix+8 && yy == iy-1)  || (x2 > ix-1 && x2 < ix+8 && y2 == iy-1)
        || (x3 > ix-1 && x3 < ix+8 && y3 == iy-1)  || (x4 > ix-1 && x4 < ix+8 && y4 == iy-1) 
        || (x5 > ix-1 && x5 < ix+8 && y5 == iy-1)  || (x6 > ix-1 && x6 < ix+8 && y6 == iy-1) 
        || (x7 > ix-1 && x7 < ix+8 && y7 == iy-1) ) //Intervalo de espacios de la nave
        {
            corazones --;
            mostrarCorazones(corazones);
            Beep(200, 500);
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

    if(vidas == 0)
    {
        cout << "GAME OVER";
        gameOver();
        gotoxy(57, 13); cout << "Rendirte?";
        gotoxy(53, 14); cout << "1 - No | 2 - Si";
        
        do
        {
            gotoxy(55, 15);
            cout << "Tu decision: ";
            do
            {
            cin >> decision;
            } while(decision < 1 || decision > 2);

            if (decision == 1)
            {
                cout << "No se rinde";
                return;
            }

            if (decision == 2)
            {
                cout << "Se rinde";
                exit(0);
            }
            
        } while (true);

        break;
    }

    yy++; y2++; y3++; y4++; y5++; y6++; y7++;
    
    }while(true);
}

void caratula()
{
    system("color 0e");
    dibujarS1();
    Beep(400, 500);
    
    system("color 07");
    dibujarP1();
    Beep(400, 500);
    
    system("color 0e");
    dibujarA();
    Beep(500, 500);
    
    system("color 07");
    dibujarC();
    Beep(500, 500); 
    
    system("color 0e");
    dibujarE();
    Beep(600, 500);
    
    system("color 07");
    dibujarS2();
    Beep(650, 500);
    
    system("color 0e");
    dibujarH();
    Beep(660, 500);
    
    system("color 07");
    dibujarI();
    Beep(680, 500); 
    
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
    dibujarCualquier();
    getch();
}


int main()
{
    //SetConsoleOutputCP(CP_UTF8);
    // puts(nave_punta);
    // puts(nave_cuerpo);
    // puts(nave_cola);
    
    //caratula();

    while(true)
    {
    system("cls");
    system("color 07");

    gotoxy(ix, iy); puts(nave_punta);
    gotoxy(ix, iy+1); puts(nave_cuerpo);
    gotoxy(ix, iy+2); puts(nave_cola);

    posicionVidas(vidas);
    mostrarCorazones(corazones);
    gameplay();
    }
    //getch();
}