#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD                      result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.X;
  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD                      result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.Y;
  }


main()
{
      int a=97,b,c;
      for(b=0;b<=2;b++) //3 lines
      {
      c=a+8; //# of letters each line
      for(;a<=c;a++) //printing them up
      putchar(a);
      putchar(10);
      }
      SHORT x=wherex();
      SHORT y=wherey();
      gotoxy(x,y); //replacing letters
      printf("o");
      gotoxy(5,1);
      printf("d");
      while(a);//a loop just to keep the window opened

}
