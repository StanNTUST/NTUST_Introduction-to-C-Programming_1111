#include<stdio.h>

int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    c=a/(b*b);
    printf("%.2f\n",c);
    if(c>=30)
    {
        printf("Obese");
    }
    else if(c>=25 )
    {
        printf("Overweight");
    }
    else if(c>=18.5)
    {
        printf("Normal");
    }
    else
    {
        printf("Underweight");
    }
}
