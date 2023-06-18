#include<stdio.h>
int main(){
    long int a[10],b,c;
    scanf("%ld",&b);
    for(c=0;c<10;c++,b/=10)
    {
        a[c]=b%10;
    }
    for(c=0;c<10;c++,b/=10)
    {
        printf("%ld\n",a[c]);
    }
}
