#include<stdio.h>
int main(){
    int a=100,b,c,d,e;
    while(a<1000)
    {
        b=(a%10);
        b=b*b*b;
        c=(a/10)%10;
        c=c*c*c;
        d=(a/100)%10;
        d=d*d*d;
        if(a==b+c+d)
        {
            printf("%d\n",a);
        }
        a++;
    }
}
