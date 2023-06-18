#include<stdio.h>

int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(b==0)
    {
        printf("%.2f NTD",a*c);
    }
    if(b==1)
    {
        printf("%.2f USD",c/a);
    }
}
