#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d=10,e,que;
	srand(48763);
	scanf("%d",&que);
	a=rand()%(int)pow(10.0,(double)que);
	b=rand()%(int)pow(10.0,(double)que);

	while(d--)
	{
		printf("How much is %d times %d?\n",a,b);
		scanf("%d",&c);
		while(c!=a*b)
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
			scanf("%d",&c);
		}
			e=rand()%4+1;
			a=rand()%(int)pow(10.0,(double)que);
			b=rand()%(int)pow(10.0,(double)que);
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
	}
}
