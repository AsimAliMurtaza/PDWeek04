#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void maze();
void Pac(int x, int y);
void PacTwo(int x, int y);

main () 
{
  system("cls");
  maze();
  int x=5;
  int y=2;
  int directionFlag = 0;

 while(true)
 {
    if(directionFlag == 0)
   {
     y = y + 1;
     Pac(x, y);
   }
    if (y == 9)
   {
    directionFlag = 1;
   }
   
   if (directionFlag == 1)
   {
    y = y - 1;
   PacTwo(x, y);
   }
    PacTwo(x, y);
    if (y == 1)
    {
    directionFlag = 0;
    }
 }
}

void PacTwo(int x, int y)
{
   gotoxy(x, y+1);
   cout << " ";
   gotoxy(x, y);
   cout << "P";
   Sleep(50);
}
void Pac(int x, int y)
{
   gotoxy(x, y-1);
   cout << " ";

   gotoxy(x, y);
   cout << "P";
   Sleep(50);
}

void maze()
{
  cout << "#########################" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#                       #" << endl;
  cout << "#########################" << endl;
}

void gotoxy (int x, int y)
{
    COORD coordinates;
    coordinates.X = x; 
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
}