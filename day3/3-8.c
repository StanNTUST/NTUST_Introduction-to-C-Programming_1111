#include<stdio.h>
int main(){
    int year,m,q,k,j,h;
    scanf("%d%d%d",&year,&m,&q);
    if(m==1)
    {
        m=13;
        year--;
    }
    if(m==2)
    {
        m=14;
        year--;
    }
    k=year%100;
    j=year/100;
    h=(q+26*(m+1)/10+5*k/4+21*j/4)%7;
    switch(h)
    {
        case 0:
            printf("%s","Saturday");
            break;
        case 1:
            printf("%s","Sunday");
            break;
        case 2:
            printf("%s","Monday");
            break;
        case 3:
            printf("%s",":Tuesday");
            break;
        case 4:
            printf("%s","Wednesday");
            break;
        case 5:
            printf("%s","Thursday");
            break;
        case 6:
            printf("%s","Friday");
            break;
    }
    return 0;
}
