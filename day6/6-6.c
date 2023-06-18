#include<stdio.h>
double Newton(double a);
int main(){
    double a,b;
    scanf("%lf",&a);
    b=Newton(a);
    printf("%.5lf",b);
}
double Newton(double a){
    double c,d;
    c=1;//y
    d=a;//xdy
    c=(c+d)/2;
    d=a/c;
    while(c-d>0.00001)
    {
        c=(c+d)/2;
        d=a/c;
    }
    return c;
}
