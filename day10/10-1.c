#include<stdio.h>
int main(){
    srand(40);
    printf("20\n");
    int a[36],b,c,d;
    for(b=0;36>b;b++)
    {
        a[b]=0;
    }
    for(b=0;36000>b;b++)
    {
        c=rand()%6;
        d=rand()%6;
        a[c*6+d]++;
    }
    for(b=0;36>b;b++)
    {
        printf("%d ",a[b]);
        if(b%6==5 &&b!=0)
        {
            printf("\n");
        }
    }
}
