#include<stdio.h>
double pow(double,int);
int main(){
    double a,b;
    int c;
    scanf("%lf%d",&b,&c);
    a=pow(b,c);
    printf("%.4lf",a);
}
double pow(double b,int c)
{
    static double d=1;
    if(c>0)
    {
        d=d*b;
        return pow(b,c-1);
    }
    if(c==0)return d;
}
