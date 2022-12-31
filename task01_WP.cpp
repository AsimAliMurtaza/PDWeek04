#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);

main () 
{
 system("cls");
 cout << "Test";

 gotoxy(10, 10);
 cout << "My name is Asim"; 
}

void gotoxy (int x, int y)
    {
         COORD coordinates;
         coordinates.X = x;
         coordinates.Y = y; 
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }