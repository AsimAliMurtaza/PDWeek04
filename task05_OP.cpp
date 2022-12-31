#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int, int);

main()
{
  gotoxy(40, 1);
cout << ("        ####          ") << endl;
  gotoxy(40, 2);
cout << ("      ########        ") << endl;
  gotoxy(40, 3);
cout << ("    ###      ###     ") << endl;
  gotoxy(40, 4);
cout << ("  ###          ###   ") << endl;
  gotoxy(40, 5);
cout << (" ###            ### ") << endl;
  gotoxy(40, 6);
cout << (" ###            ### ") << endl;
  gotoxy(40, 7);
cout << (" ###            ### ") << endl;
  gotoxy(40, 8);
cout << (" ################## ") << endl;
  gotoxy(40, 9);
cout << (" ###            ### ") << endl;
  gotoxy(40, 10);
cout << (" ###            ### ") << endl;
  gotoxy(40, 11);
cout << (" ###            ### ") << endl;
  gotoxy(40, 12);
cout << (" ###            ### ") << endl;

  gotoxy(40, 13);
cout << ("  *********     ********           ") << endl;
  gotoxy(40,14);
cout << ("  ***** ****   *** *****           ") << endl;
  gotoxy(40, 15);
cout << ("  *****  ********  *****           ") << endl;
  gotoxy(40, 16);
cout << ("  *****    *****   *****           ") << endl;
  gotoxy(40, 17);
cout << ("  *****            *****           ") << endl;
  gotoxy(40, 18);
cout << ("  *****            *****           ") << endl;
  gotoxy(40, 19);
cout << ("  *****            *****           ") << endl;
  gotoxy(40, 20);

cout << ("         ***********                 ") << endl;
  gotoxy(40, 21);
cout << ("         ***********                 ") << endl;
  gotoxy(40, 22);
cout << ("            *****                    ") << endl;
  gotoxy(40, 23);
cout << ("            *****                    ") << endl;
  gotoxy(40, 24);
cout << ("            *****                    ") << endl;
  gotoxy(40, 25);
cout << ("            *****                    ") << endl;
  gotoxy(40, 26);
cout << ("         ***********                 ") << endl;
  gotoxy(40, 27);
cout << ("         ***********                 ") << endl;

  gotoxy(40, 28);
cout << ("             **********        ") << endl;
  gotoxy(40, 29);
cout << ("          ****        ****      ") << endl;
  gotoxy(40, 30);
cout << ("         ****          ****     ") << endl;
  gotoxy(40, 31);
cout << ("          ****                   ") << endl;
  gotoxy(40, 32);
cout << ("            ************           ") << endl;
  gotoxy(40,33);
cout << ("                      ****           ") << endl;
  gotoxy(40, 34);
cout << ("         ****          ****         ") << endl;
  gotoxy(40, 35);
cout << ("          ****        ****       ") << endl;
  gotoxy(40, 36);
cout << ("             *********       ") << endl;
}

void gotoxy (int x, int y)
{
    COORD coordinates;
    coordinates.X = x; 
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
}
