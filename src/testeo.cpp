#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <cstdio>
#include <limits>
#include "../lib/utility.h"

using namespace std;




    //cout << 3;
    // Beep(500, 500);
    // Beep(600, 500);
    // Beep(700, 500);
    // Beep(800, 500);
    //SetConsoleOutputCP(CP_UTF8);
    //printf("♥♦♣♠\n");
    //cout << "�";
    //dibujarFlechaDer();
    //dibujarFlechaIzq(); getch();


// void perder(string &decision)
// {
//     string h = "1";
//     string k = "2";
    
//     system("color 0c");
//     system("cls");
//     Beep(300, 100);
//     gotoxy(59, 9);  cout << "x   x"; Sleep(500);
//     Beep(300, 100);
//     gotoxy(59, 10); cout << "  -  "; Sleep(500);
//     gameOver();
//     gotoxy(54, 13); cout << "Jugar de nuevo?";
//     gotoxy(53, 14); cout << "1 - No | 2 - Si";
        
//     do
//     {
//         gotoxy(55, 15);
//         cout << "Tu decision: ";
//         do
//         {
//         gotoxy(68, 15);cin >> decision;

//         if (decision == "1")
//         {
//             gotoxy(57, 13); cout << "No se rinde"; Sleep(A);
//             // vidas = 3;
//             // corazones = 3;
//             // gotoxy(x1, yy); cout << "¤";
//             // gotoxy(x2, y2); cout << "¤";
//             // gotoxy(x3, y3); cout << "¤";
//             // gotoxy(x4, y4); cout << "¤";
//             // gotoxy(x5, y5); cout << "¤";
//             // gotoxy(x6, y6); cout << "¤";
//             // gotoxy(x7, y7); cout << "¤";
//             //indicador == 1;
//             break;
//         }
        
//         if (decision == "2")
//         {
//             cout << "Se rinde";
//             exit(1);
//         }

//         } while(decision != "1" || decision != "2");
        
//     } while (1);
// }

    int main()
{

    // string decision;
    // perder(decision);

    dibujarMarco(); getch();
    
//   string texto;
//   int var;
//   cin >> var;

//   if( !cin.good() )
//     cin.clear();

//   cin >> texto;
//   cout << '-' << texto << '-';
}
