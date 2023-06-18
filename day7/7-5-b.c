#include<stdio.h>
unsigned long long fibonacci(unsigned int n);
int main(){
    unsigned long long a=0,b=1,number;
    while(a==0){
        a=fibonacci(b);
        b++;
    }
    printf("%llu",a);
}
unsigned long long fibonacci(unsigned int n)
{
    unsigned long long a=1,b=1,c,d;
    if(n==1)return 0;
    else if(n==2)return 0;
    else
    {
        for(d=3;n>=d;d++)
        {
            c=b;
            b+=a;
            a=c;
        }
        if(b>b+a)return b;
        else return 0;
    }
}
