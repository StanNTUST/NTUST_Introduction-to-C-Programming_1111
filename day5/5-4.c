#include<stdio.h>
#include<math.h>
int main(){
    double a=0,b;
    int d;
    for(d=1;d<1000;d++)
    {
        b=d;
        a+=(1/(sqrt(b)+sqrt(b+1)));
    }
    printf("%.4lf",a);
}
