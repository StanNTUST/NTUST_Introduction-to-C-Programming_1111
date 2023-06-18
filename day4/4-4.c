#include<stdio.h>
int main(){
    int a;
    double b=0,c=0;
    for(a=1;a<=100000;a++)
    {
        if(a%2==0)
        {
            b-=(4.000000/(2*a-1));
        }
        if(a%2==1)
        {
            b+=(4.000000/(2*a-1));
        }
        if(a%10000==0)
        {
            printf("%.6lf\n",b);
        }
    }
}
