
#include <windows.h>
#include <string>
#include <iostream>		    // entradas salidas en consola y string cout cin ...
#include <fstream> 		    // manejo de archivos
#include <vector>           // gestiona las listas / arreglos / buffers
#include <cstring>
#include <sstream> 
#include <conio.h>

enum MENU {SALIR = 0, AGREGAR, LISTAR, ELIMINAR, GUARDAR};

enum COLORES {BLACK = 0, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LGREY, DGREY, LBLUE, LGREEN, LCYAN, LRED, LMAGENTA, YELLOW, WHITE = 15};

void SetColor (int background, int text)
{
    int colorTexto = text - (background*16);
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(terminal, colorTexto);
}

void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;

    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon, dwPos);
}

//Función que limpia la pantalla sin depender del terminal
#ifdef _WIN32
  #include<windows.h>
#endif  

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void showProgressBar_u( string nombre, int indexLetra)
{
    string str;
    cout <<"\r[";
    for(int barra=0; barra <= nombre.length(); barra++)
    {
        if (barra < indexLetra)
            str += nombre[barra];
        cout <<  ( ( barra <= indexLetra && barra > 0) ? "#" : " ");
        Sleep(DELAY);
    }
    cout<< "] " 
        << 100 * indexLetra /nombre.length()<< "% " 
        << "\t\t Loading: " << indexLetra << " de " << nombre.length() << " \t " << str
        << endl;
    //fflush(stdout);
}

string showAvance(string loading, int rellenar )  
{    
    char caracteres[]= "/-\\"; //"-=-";
    string relleno="";   
    for (size_t i = 0; i < rellenar; i++)
        relleno+=" ";
    for (int x =0 ; x <= 4; x++) {
        cout << loading << caracteres[x % 3] <<  relleno << "]";
        Sleep(100);
    }
    return "o";
}

void showProgressBar_a( string nombre, int indexLetra)
{
    string str,loading = "\r [";
    for(int barra=0; barra <= nombre.length(); barra++)
    {
        if (barra < indexLetra)
            str += nombre[barra];
        loading += ( ( barra <= indexLetra && barra > 0) ? showAvance( loading, nombre.length() - barra) : " ");
        cout<< loading;
    }
    cout<< "] " 
        << 100 * indexLetra /nombre.length()<< "% " 
        << "\t\t Loading: " << indexLetra << " de " << nombre.length() << " \t " << str
        << endl;
    //fflush(stdout);
}

void showProgressBar_i( string nombre, int indexLetra)
{
    int loops = 0;
    bool avanza = true;
    string str,loading ="---------------------------";
    for(int barra=0; barra <= nombre.length(); barra++)
    {
        if (barra < indexLetra)
            str += nombre[barra];
        
        for (int i = 0; loops <= indexLetra; )
        {
            string str = loading;     
            cout << "\r [" << str.insert(i,"<-=->") << "]"; 
            Sleep(10);
            i += (avanza) ? 1 : -1;
    
            if(i == loading.length() || i == 0)
            {
                avanza = !avanza;
                loops++;
            }
        }
    }
    cout<< 100 * indexLetra /nombre.length()<< "% " 
        << "\t\t Loading: " << indexLetra << " de " << nombre.length() << " \t " << str
        << endl;
    //fflush(stdout);
}

void showProgressBar_x( string nombre, int indexLetra)
{
    string str,loading = "\r";
    for(int barra=0; barra <= nombre.length(); barra++)
    {
        if (barra < indexLetra)
            str += nombre[barra];
        char caracteres[]= "|/-\\"; //"-=-";
        for (int x =0 ; x <= 4; x++) {
            cout <<loading << caracteres[x % 4] << " ";
            Sleep(20);
        }
    cout<< loading;
    }
    cout<< 100 * indexLetra /nombre.length()<< "% " 
        << "\t Loading: " << indexLetra << " de " << nombre.length() << " \t " << str
        << endl;
    //fflush(stdout);
}
