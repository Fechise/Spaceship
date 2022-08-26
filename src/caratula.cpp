#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <cstdio>
#include "../lib/utility.h"

#define A 25

using namespace std;

enum COLORES {BLACK = 0, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LGREY, DGREY, LBLUE, LGREEN, LCYAN, LRED, LMAGENTA, YELLOW, WHITE = 15};

void SetColor (int background, int text)
{
    int colorTexto = text - (background*16);
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(terminal, colorTexto);
}


void dibujarS1()
{
    gotoxy(25,5); cout << "S"; Sleep(A);
    gotoxy(26,5); cout << "S"; Sleep(A);
    gotoxy(27,5); cout << "S"; Sleep(A);
    gotoxy(28,5); cout << "S"; Sleep(A);
    gotoxy(29,5); cout << "S"; Sleep(A);
    
    gotoxy(25,6); cout << "S"; Sleep(A);
    gotoxy(25,7); cout << "S"; Sleep(A);
    gotoxy(25,8); cout << "S"; Sleep(A);
    
    gotoxy(25,9); cout << "S"; Sleep(A);
    gotoxy(26,9); cout << "S"; Sleep(A);
    gotoxy(27,9); cout << "S"; Sleep(A);
    gotoxy(28,9); cout << "S"; Sleep(A);
    gotoxy(29,9); cout << "S"; Sleep(A);
    
    gotoxy(29,10); cout << "S"; Sleep(A);
    gotoxy(29,11); cout << "S"; Sleep(A);
    gotoxy(29,12); cout << "S"; Sleep(A);
    
    gotoxy(29,13); cout << "S"; Sleep(A);
    gotoxy(28,13); cout << "S"; Sleep(A);
    gotoxy(27,13); cout << "S"; Sleep(A);
    gotoxy(26,13); cout << "S"; Sleep(A);
    gotoxy(25,13); cout << "S"; Sleep(A);
}

void dibujarP1()
{
    gotoxy(31,5); cout << "P"; Sleep(A);
    gotoxy(32,5); cout << "P"; Sleep(A);
    gotoxy(33,5); cout << "P"; Sleep(A);
    gotoxy(34,5); cout << "P"; Sleep(A);
    gotoxy(35,5); cout << "P"; Sleep(A);
    
    gotoxy(31,6); cout << "P";
    gotoxy(35,6); cout << "P"; Sleep(A);
    
    gotoxy(31,7); cout << "P";
    gotoxy(35,7); cout << "P"; Sleep(A);
    
    gotoxy(31,8); cout << "P";
    gotoxy(35,8); cout << "P"; Sleep(A);
    
    gotoxy(31,9); cout << "P"; Sleep(A);
    gotoxy(32,9); cout << "P"; Sleep(A);
    gotoxy(33,9); cout << "P"; Sleep(A);
    gotoxy(34,9); cout << "P"; Sleep(A);
    gotoxy(35,9); cout << "P"; Sleep(A);

    gotoxy(31,10); cout << "P"; Sleep(A);
    gotoxy(31,11); cout << "P"; Sleep(A);
    gotoxy(31,12); cout << "P"; Sleep(A);
    gotoxy(31,13); cout << "P"; Sleep(A); 
}

void dibujarA()
{
    gotoxy(37,5); cout << "A"; Sleep(A);
    gotoxy(38,5); cout << "A"; Sleep(A);
    gotoxy(39,5); cout << "A"; Sleep(A);
    gotoxy(40,5); cout << "A"; Sleep(A);
    gotoxy(41,5); cout << "A"; Sleep(A);

    gotoxy(37,6); cout << "A";
    gotoxy(41,6); cout << "A"; Sleep(A);

    gotoxy(37,7); cout << "A";
    gotoxy(41,7); cout << "A"; Sleep(A);

    gotoxy(37,8); cout << "A";
    gotoxy(41,8); cout << "A"; Sleep(A);
    
    gotoxy(37,9); cout << "A"; Sleep(A);
    gotoxy(38,9); cout << "A"; Sleep(A);
    gotoxy(39,9); cout << "A"; Sleep(A);
    gotoxy(40,9); cout << "A"; Sleep(A);
    gotoxy(41,9); cout << "A"; Sleep(A);

    gotoxy(37,10); cout << "A";
    gotoxy(41,10); cout << "A"; Sleep(A);

    gotoxy(37,11); cout << "A";
    gotoxy(41,11); cout << "A"; Sleep(A);

    gotoxy(37,12); cout << "A";
    gotoxy(41,12); cout << "A"; Sleep(A);

    gotoxy(37,13); cout << "A";
    gotoxy(41,13); cout << "A"; Sleep(A);

}

void dibujarC()
{
    gotoxy(43,5); cout << "C"; Sleep(A);
    gotoxy(44,5); cout << "C"; Sleep(A);
    gotoxy(45,5); cout << "C"; Sleep(A);
    gotoxy(46,5); cout << "C"; Sleep(A);
    gotoxy(47,5); cout << "C"; Sleep(A);

    gotoxy(43,6); cout << "C"; Sleep(A);
    gotoxy(43,7); cout << "C"; Sleep(A);
    gotoxy(43,8); cout << "C"; Sleep(A);
    gotoxy(43,9); cout << "C"; Sleep(A);
    gotoxy(43,10); cout << "C"; Sleep(A);
    gotoxy(43,11); cout << "C"; Sleep(A);
    gotoxy(43,12); cout << "C"; Sleep(A);

    gotoxy(43,13); cout << "C"; Sleep(A);
    gotoxy(44,13); cout << "C"; Sleep(A);
    gotoxy(45,13); cout << "C"; Sleep(A);
    gotoxy(46,13); cout << "C"; Sleep(A);
    gotoxy(47,13); cout << "C"; Sleep(A);
}

void dibujarE()
{
    gotoxy(49,5); cout << "E"; Sleep(A);
    gotoxy(50,5); cout << "E"; Sleep(A);
    gotoxy(51,5); cout << "E"; Sleep(A);
    gotoxy(52,5); cout << "E"; Sleep(A);
    gotoxy(53,5); cout << "E"; Sleep(A);

    gotoxy(49,6); cout << "E"; Sleep(A);
    gotoxy(49,7); cout << "E"; Sleep(A);
    gotoxy(49,8); cout << "E"; Sleep(A);

    gotoxy(49,9); cout << "E"; Sleep(A);
    gotoxy(50,9); cout << "E"; Sleep(A);
    gotoxy(51,9); cout << "E"; Sleep(A);
    gotoxy(52,9); cout << "E"; Sleep(A);
    gotoxy(53,9); cout << "E"; Sleep(A);

    gotoxy(49,10); cout << "E"; Sleep(A);
    gotoxy(49,11); cout << "E"; Sleep(A);
    gotoxy(49,12); cout << "E"; Sleep(A);

    gotoxy(49,13); cout << "E"; Sleep(A);
    gotoxy(50,13); cout << "E"; Sleep(A);
    gotoxy(51,13); cout << "E"; Sleep(A);
    gotoxy(52,13); cout << "E"; Sleep(A);
    gotoxy(53,13); cout << "E"; Sleep(A);
}

void dibujarS2()
{
    gotoxy(55,5); cout << "S"; Sleep(A);
    gotoxy(56,5); cout << "S"; Sleep(A);
    gotoxy(57,5); cout << "S"; Sleep(A);
    gotoxy(58,5); cout << "S"; Sleep(A);
    gotoxy(59,5); cout << "S"; Sleep(A);

    gotoxy(55,6); cout << "S"; Sleep(A);
    gotoxy(55,7); cout << "S"; Sleep(A);
    gotoxy(55,8); cout << "S"; Sleep(A);
    
    gotoxy(55,9); cout << "S"; Sleep(A);
    gotoxy(56,9); cout << "S"; Sleep(A);
    gotoxy(57,9); cout << "S"; Sleep(A);
    gotoxy(58,9); cout << "S"; Sleep(A);
    gotoxy(59,9); cout << "S"; Sleep(A);
    
    gotoxy(59,10); cout << "S"; Sleep(A);
    gotoxy(59,11); cout << "S"; Sleep(A);
    gotoxy(59,12); cout << "S"; Sleep(A);
    
    gotoxy(59,13); cout << "S"; Sleep(A);
    gotoxy(58,13); cout << "S"; Sleep(A);
    gotoxy(57,13); cout << "S"; Sleep(A);
    gotoxy(56,13); cout << "S"; Sleep(A);
    gotoxy(55,13); cout << "S"; Sleep(A);
}

void dibujarH()
{
    gotoxy(61,5); cout << "H";
    gotoxy(65,5); cout << "H"; Sleep(A);

    gotoxy(61,6); cout << "H";
    gotoxy(65,6); cout << "H"; Sleep(A);
    
    gotoxy(61,7); cout << "H";
    gotoxy(65,7); cout << "H"; Sleep(A);
    
    gotoxy(61,8); cout << "H";
    gotoxy(65,8); cout << "H"; Sleep(A);
    
    gotoxy(61,9); cout << "H"; Sleep(A);
    gotoxy(62,9); cout << "H"; Sleep(A);
    gotoxy(63,9); cout << "H"; Sleep(A);
    gotoxy(64,9); cout << "H"; Sleep(A);
    gotoxy(65,9); cout << "H"; Sleep(A);

    gotoxy(61,10); cout << "H";
    gotoxy(65,10); cout << "H"; Sleep(A);

    gotoxy(61,11); cout << "H";
    gotoxy(65,11); cout << "H"; Sleep(A);
    
    gotoxy(61,12); cout << "H";
    gotoxy(65,12); cout << "H"; Sleep(A);
    
    gotoxy(61,13); cout << "H";
    gotoxy(65,13); cout << "H"; Sleep(A);
}

void dibujarI()
{
    gotoxy(67,5); cout << "I"; Sleep(A);
    gotoxy(71,5); cout << "I"; Sleep(A);
    gotoxy(68,5); cout << "I"; Sleep(A);
    gotoxy(70,5); cout << "I"; Sleep(A);
    gotoxy(69,5); cout << "I"; Sleep(A);

    gotoxy(69,6); cout << "I"; Sleep(A);
    gotoxy(69,7); cout << "I"; Sleep(A);
    gotoxy(69,8); cout << "I"; Sleep(A);
    gotoxy(69,9); cout << "I"; Sleep(A);
    gotoxy(69,10); cout << "I"; Sleep(A);
    gotoxy(69,11); cout << "I"; Sleep(A);
    gotoxy(69,12); cout << "I"; Sleep(A);

    gotoxy(69,13); cout << "I"; Sleep(A);
    gotoxy(68,13); cout << "I"; Sleep(A);
    gotoxy(70,13); cout << "I"; Sleep(A);
    gotoxy(67,13); cout << "I"; Sleep(A);
    gotoxy(71,13); cout << "I"; Sleep(A);
}

void dibujarP2()
{
    gotoxy(73,5); cout << "P"; Sleep(A);
    gotoxy(74,5); cout << "P"; Sleep(A);
    gotoxy(75,5); cout << "P"; Sleep(A);
    gotoxy(76,5); cout << "P"; Sleep(A);
    gotoxy(77,5); cout << "P"; Sleep(A);
    
    gotoxy(73,6); cout << "P";
    gotoxy(77,6); cout << "P"; Sleep(A);
    
    gotoxy(73,7); cout << "P";
    gotoxy(77,7); cout << "P"; Sleep(A);
    
    gotoxy(73,8); cout << "P";
    gotoxy(77,8); cout << "P"; Sleep(A);
    
    gotoxy(73,9); cout << "P"; Sleep(A);
    gotoxy(74,9); cout << "P"; Sleep(A);
    gotoxy(75,9); cout << "P"; Sleep(A);
    gotoxy(76,9); cout << "P"; Sleep(A);
    gotoxy(77,9); cout << "P"; Sleep(A);

    gotoxy(73,10); cout << "P"; Sleep(A);
    gotoxy(73,11); cout << "P"; Sleep(A);
    gotoxy(73,12); cout << "P"; Sleep(A);
    gotoxy(73,13); cout << "P"; Sleep(A); 
}

void dibujarCargando()
{

    gotoxy(46,15); cout << "C"; Sleep(A);
    Beep(150, 1500);
    gotoxy(47,15); cout << "a"; Sleep(A);
    gotoxy(48,15); cout << "r"; Sleep(A);
    gotoxy(49,15); cout << "g"; Sleep(A);
    gotoxy(50,15); cout << "a"; Sleep(A);
    gotoxy(51,15); cout << "n"; Sleep(A);
    gotoxy(52,15); cout << "d"; Sleep(A);
    gotoxy(53,15); cout << "o"; Sleep(A);

    gotoxy(54,15); cout << "."; Sleep(300);
    gotoxy(54,15); cout << " "; Sleep(300);
    gotoxy(55,15); cout << "."; Sleep(300);
    gotoxy(55,15); cout << " "; Sleep(300);
    Beep(150, 1500);
    gotoxy(56,15); cout << "."; Sleep(300);
    gotoxy(56,15); cout << " "; Sleep(300);
    gotoxy(54,15); cout << "."; Sleep(300);
    gotoxy(54,15); cout << " "; Sleep(300);
    gotoxy(55,15); cout << "."; Sleep(300);
    gotoxy(55,15); cout << " "; Sleep(300);
    gotoxy(56,15); cout << "."; Sleep(300);
    gotoxy(56,15); cout << " "; Sleep(300);
}

void dibujarListo()
{
    gotoxy(49,15); cout << "L"; Sleep(A);
    gotoxy(50,15); cout << "i"; Sleep(A);
    gotoxy(51,15); cout << "s"; Sleep(A);
    gotoxy(52,15); cout << "t"; Sleep(A);
    gotoxy(53,15); cout << "o"; Sleep(A);
}

void dibujarCualquier()
{
    gotoxy(32,15); cout << "P"; Sleep(A);
    gotoxy(33,15); cout << "r"; Sleep(A);
    gotoxy(34,15); cout << "e"; Sleep(A);
    gotoxy(35,15); cout << "s"; Sleep(A);
    gotoxy(36,15); cout << "i"; Sleep(A);
    gotoxy(37,15); cout << "o"; Sleep(A);
    gotoxy(38,15); cout << "n"; Sleep(A);
    gotoxy(39,15); cout << "e"; Sleep(A);

    gotoxy(41,15); cout << "c"; Sleep(A);
    gotoxy(42,15); cout << "u"; Sleep(A);
    gotoxy(43,15); cout << "a"; Sleep(A);
    gotoxy(44,15); cout << "l"; Sleep(A);
    gotoxy(45,15); cout << "q"; Sleep(A);
    gotoxy(46,15); cout << "u"; Sleep(A);
    gotoxy(47,15); cout << "i"; Sleep(A);
    gotoxy(48,15); cout << "e"; Sleep(A);
    gotoxy(49,15); cout << "r"; Sleep(A);

    gotoxy(51,15); cout << "t"; Sleep(A);
    gotoxy(52,15); cout << "e"; Sleep(A);
    gotoxy(53,15); cout << "c"; Sleep(A);
    gotoxy(54,15); cout << "l"; Sleep(A);
    gotoxy(55,15); cout << "a"; Sleep(A);

    gotoxy(57,15); cout << "p"; Sleep(A);
    gotoxy(58,15); cout << "a"; Sleep(A);
    gotoxy(59,15); cout << "r"; Sleep(A);
    gotoxy(60,15); cout << "a"; Sleep(A);

    gotoxy(62,15); cout << "c"; Sleep(A);
    gotoxy(63,15); cout << "o"; Sleep(A);
    gotoxy(64,15); cout << "n"; Sleep(A);
    gotoxy(65,15); cout << "t"; Sleep(A);
    gotoxy(66,15); cout << "i"; Sleep(A);
    gotoxy(67,15); cout << "n"; Sleep(A);
    gotoxy(68,15); cout << "u"; Sleep(A);
    gotoxy(69,15); cout << "a"; Sleep(A);
    gotoxy(70,15); cout << "r"; Sleep(A);
}

void borrarLineaX(int x, int y)
{
    for (int i = 0; i < 119; i++)
    {
        gotoxy(x,y); cout << " ";
        x++;
    }
}

int main()
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