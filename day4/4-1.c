#include<stdio.h>
int main(){
    int a,b,c;
    for(a=1;a<=10;a++)
    {
        for(b=0;b<a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(a=10;a>=1;a--)
    {
        for(b=0;b<a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(a=1;a<=10;a++)
    {
        for(c=1;c<a;c++)
        {
            printf(" ");
        }
        for(b=0;b<=10-a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(a=10;a>=1;a--)
    {
        for(c=1;c<a;c++)
        {
            printf(" ");
        }
        for(b=0;b<=10-a;b++)
        {
            printf("*");
        }
        printf("\n");
    }

}
