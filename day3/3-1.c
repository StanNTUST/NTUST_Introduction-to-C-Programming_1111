#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf",&a);
    while(a!=-1)
    {
        b=(a/100)*9+200;
        printf("%.2lf\n",b);
        scanf("%lf",&a);
    }
    return 0;
}
