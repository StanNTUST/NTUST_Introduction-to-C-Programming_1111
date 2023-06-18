#include<stdio.h>
unsigned long long fibonacci(unsigned int n);
int main(){
    unsigned int n;
    unsigned long long number;
    scanf("%ud",&n);
    number=fibonacci(n);
    printf("%llu",number);
}
unsigned long long fibonacci(unsigned int n)
{
    unsigned long long a=1,b=1,c,d;
    if(n==1)return a;
    else if(n==2)return b;
    else
    {
        for(d=3;n>=d;d++)
        {
            c=b;
            b+=a;
            a=c;
        }
        return b;
    }
}
