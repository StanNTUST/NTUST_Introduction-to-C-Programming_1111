#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a/10000;
    c=a%10;
    d=(a/10)%10;
    e=(a/1000)%10;
    if(b==c && d==e)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}
