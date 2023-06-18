#include<stdio.h>
int bankBalance( int,int);
int main(){
    int a=1000,b,number;
    srand(48763);
    while(a>0){
        scanf("%d",&b);
        a=bankBalance(a,b);
    }
    printf("Busted\n");
}
int bankBalance(int a, int b)
{
    if(b>a)
    {
        printf("Overflow\n");
        return a;
    }
    else
    {
        int number,number2,total,total2;
        number=rand()%6+1;
        number2=rand()%6+1;
        total=number+number2;
        if(total==4 || total==5 || total==6 || total==8 || total==9 ||total==10)
        {
            while(1)
            {
                number=rand()%6+1;
                number2=rand()%6+1;
                total2=number+number2;
                if(total==total2)
                {
                    a+=b;
                    printf("Win\n");
                    printf("%d\n",a);
                    return a;
                    break;
                }
                if(total2==7)
                {
                    a-=b;
                    printf("Lose\n");
                    printf("%d\n",a);
                    return a;
                }
            }
        }
        else if(total==7 ||total==11)
        {
            a+=b;
            printf("Win\n");
            printf("%d\n",a);
            return a;
        }
        else
        {
            a-=b;
            printf("Lose\n");
            printf("%d\n",a);
            return a;
        }
    }
}
//printf("%d",a);
