#include<stdio.h>

int main()
{
    int a,b,c,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    printf("%d",sum);
}
