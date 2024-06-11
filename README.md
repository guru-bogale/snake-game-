# snake-game-
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


void input()
{
  if(kbhit())
  {
    switch(getch())
    {
      case 'a':
            flag=1;
            break;
      case 's':
            flag=2;
            break;
      case 'd':
            flag=3;
            break;
      case 'w':
            flag=4;
            break;
      case 'x':
            gameover=1;
            break;
      }
    }
 }
 
