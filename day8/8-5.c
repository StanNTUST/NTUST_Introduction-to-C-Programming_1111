#include<stdio.h>
int main()
{
	int a,b,c,d=10,e,acs=0;
	double num=0,ac=0;
	srand(48763);
	a=rand()%10;
	b=rand()%10;
	printf("How much is %d times %d?\n",a,b);
	while(d>0 || acs!=1)
	{
		scanf("%d",&c);
		num++;
		d--;
		acs=0;
		if(c!=a*b)
		{
			e=rand()%4+1;
			switch(e)
			{
				case 1:
					printf("No, Please try again.\n");
					break;
				case 2:
					printf("Wrong. Try once more.\n");
					break;
				case 3:
					printf("Don¡¦t give up.\n");
					break;
				case 4:
					printf("No. Keep trying.\n");
					break;
			}
		}
		else{
			e=rand()%4+1;
			ac++;
			a=rand()%10;
			b=rand()%10;
			acs=1;
			switch(e)
			{
			case 1:
				printf("Very good!\n");
				break;
			case 2:
				printf("Excellent!\n");
				break;
			case 3:
				printf("Nice work!\n");
				break;
			case 4:
				printf("Keep up the good work!\n");
				break;
		}
			if(d>0) printf("How much is %d times %d?\n",a,b);
		}
	}
	if(ac/num>=0.75) printf("Congratulations, you are ready to go to the next level!");
	else printf("Please ask your teacher for extra help.");
}
