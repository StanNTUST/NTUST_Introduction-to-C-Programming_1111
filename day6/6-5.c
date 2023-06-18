#include<stdio.h>
int reverse(int a);
int main(){
    long a,b;
    scanf("%d",&a);
    b=reverse(a);
    printf("%d",b);
}
int reverse(int a){
    int c;
    while(a!=0)
    {
        c=c*10+a%10;
        a/=10;
    }
    return c;
}
