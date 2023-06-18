#include<stdio.h>
int main()
{
	int a,b,c,d=10;
	srand(48763);
	while(d--)
	{
		a=rand()%10;
		b=rand()%10;
		printf("How much is %d times %d?\n",a,b);
		scanf("%d",&c);
		while(c!=a*b)
		{
			printf("No, Please try again.\n");
			scanf("%d",&c);
		}
		printf("Very good!\n");
	}
}
