#include<stdio.h>
Hanoi(int,char,char,char);
int main(){
    int a=5;
    Hanoi(a,'1','2','3');
}

Hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c-%c\n",a,c);
    }
    else
    {
        Hanoi(n-1,a,c,b);
        printf("%c-%c\n",a,c);
        Hanoi(n-1,b,a,c);
    }
}
