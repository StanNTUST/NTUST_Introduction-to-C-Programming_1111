#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.H>
#define move(a,b) (a+b>0) ? a+b:0
void race(int turtoise,int rabbit); 
int main()
{
	srand(time(NULL));
	int rabbit=0,turtoise=0,rabbit_move,turtoise_move;
	printf("%s\n%s\n","BANG !!!!!","AND THEY'RE OFF !!!!!");
	while(rabbit<=70 && turtoise<=70)
	{
		turtoise_move=rand()%10+1;
		rabbit_move=rand()%10+1;
		if(turtoise_move<=5)
		{
			printf("T Fast plod\n");
			turtoise=move(turtoise,3);
		}
		else if(turtoise_move<=7)
		{
			printf("T Slip\n");
			turtoise=move(turtoise,-6);
		}
		else
		{
			printf("T Slow plod\n");
			turtoise=move(turtoise,1);
		}
		if(rabbit_move<=2)
		{
			printf("H Sleep\n");
		}
		else if(rabbit_move<=4)
		{
			printf("H Big hop\n");
			rabbit=move(rabbit,9);
		}
		else if(rabbit_move<=5)
		{
			printf("H Big slip\n");
			rabbit=move(rabbit,-12);
		}
		else if(rabbit_move<=8)
		{
			printf("H Small hop\n");
			rabbit=move(rabbit,1);
		}
		else
		{
			printf("H Small slip\n");
			rabbit=move(rabbit,2);
		}
		race(turtoise,rabbit);
	}
	if(rabbit>70)rabbit=70;
	if(turtoise>70)turtoise=70; 
	if(rabbit>turtoise)printf("Hare wins. Yuch.");
	else if(rabbit<turtoise)printf("TORTOISE WINS!!! YAY!!!");
	else printf("It's a tie.");
}
void race(int turtoise,int rabbit)
{
	char len[71];
	memset(len,' ',70);
	int count;
	if(rabbit>70)rabbit=70;
	if(turtoise>70)turtoise=70; 
	len[turtoise]='T';
	len[rabbit]='H';
	if(turtoise==rabbit)
	{
		printf("OUCH!!!\n");
	}
	else{
		for(count=0;count<71;count++)
		{
			printf("%c",len[count]);
		}
		puts("");
	}
}
