#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>



void Food()
{ 
	int length;
    struct coordinate {
	int x;
	int y; }; typedef struct coordinate coordinate;
	coordinate head,food;
	
	if(head.x==food.x&&head.y==food.y)
	{ 
		length++;
		time_t a;
		a=time(0);
		srand(a);
		food.x=rand()%70;
		if(food.x<=10) 
			food.x+=11;
		food.y=rand()%30;
		if(food.y<=10) 
			food.y+=11;
	} 
	else if(food.x==0)//o create food for the first time coz global variable are initialized with 0/
{
    food.x=rand()%70;
    if(food.x<=10)
		food.x+=11;
    food.y=rand()%30;
    if(food.y<=10)
		food.y+=11; 
}
}

void input()
{ 
	if(kbhit())
	{ 
		switch(getch())
			{ case 'a': flag=1; break;
			  case 's': flag=2; break; 
			  case 'd': flag=3; break;
			  case 'w': flag=4; break; 
			  case 'x': gameover=1; break;
			} 
	} 
}



void main()
{

}
