#include<stdio.h>
int main()
{
	srand(4823);
	int ball,slot,a,b,c,row;
	scanf("%d%d",&ball,&slot);
	int choose[ball][slot-1],in[slot],max=0;
	for(a=0;a<slot;a++)
	{
		in[a]=0;
	}
	for(a=0;a<ball;a++)
	{
		row=0;
		for(b=0;b<slot-1;b++)
		{
			c=rand()%2;
			choose[a][b]=c;
			if(c==1) printf("L");
			if(c==0) printf("R");
			row+=choose[a][b];
		}
		in[row]++;
		printf("\n");
	}
	for(a=0;a<slot;a++)
	{
		if(max<in[a])
		{
			max=in[a];
		}
	}
	for(a=0;a<max;a++)
	{
		for(b=0;b<slot;b++)
		{
			if(in[b]!=0 && in[b]-(max-a)>=0)
			{
				printf("o");
				in[b]--;
			}
			else printf("x");
		}
		if(a!=max-1)printf("\n");
	}
}
