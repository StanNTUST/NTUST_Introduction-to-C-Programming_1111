#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a,b,c,d=10,e,que,choose;
	srand(48763);
	scanf("%d",&que);
	a=rand()%10;
	b=rand()%10;
	if(que==1)
	{
		while(d--)
        {
            printf("How much is %d plus %d?\n",a,b);
            scanf("%d",&c);
            while(c!=a+b)
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
                        printf("Don・t give up.\n");
                        break;
                    case 4:
                        printf("No. Keep trying.\n");
                        break;
                }
			scanf("%d",&c);
            }
			e=rand()%4+1;
			a=rand()%10;
			b=rand()%10;
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
	else if(que==2)
	{
		while(d--)
        {
            printf("How much is %d minus %d?\n",a,b);
            scanf("%d",&c);
            while(c!=a-b)
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
                        printf("Don・t give up.\n");
                        break;
                    case 4:
                        printf("No. Keep trying.\n");
                        break;
                }
                scanf("%d",&c);
            }
			e=rand()%4+1;
			a=rand()%10;
			b=rand()%10;
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
	else if(que==3)
	{
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
                        printf("Don・t give up.\n");
                        break;
                    case 4:
                        printf("No. Keep trying.\n");
                        break;
                }
                scanf("%d",&c);
            }
			e=rand()%4+1;
			a=rand()%10;
			b=rand()%10;
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
	else if(que==4)
	{
		while(d--)
		{
			choose=rand()%3;
			if(choose==0)printf("How much is %d plus %d?\n",a,b);
			if(choose==1)printf("How much is %d minus %d?\n",a,b);
			if(choose==2)printf("How much is %d times %d?\n",a,b);
            scanf("%d",&c);
            while((choose==2 &&c!=a*b) || (choose==1 &&c!=a-b) || (choose==0 &&c!=a+b))
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
                        printf("Don・t give up.\n");
                        break;
                    case 4:
                        printf("No. Keep trying.\n");
                        break;
                }
                scanf("%d",&c);
            }
			e=rand()%4+1;
			a=rand()%10;
			b=rand()%10;
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
}
