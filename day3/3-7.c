#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a%10;
    b=(b-7+10)%10;
    c=(a/10)%10;
    c=(c-7+10)%10;
    d=(a/100)%10;
    d=(d-7+10)%10;
    e=(a/1000)%10;
    e=(e-7+10)%10;
    printf("%d%d%d%d",c,b,e,d);
    return 0;
}
