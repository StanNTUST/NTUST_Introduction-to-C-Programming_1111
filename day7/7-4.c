#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int LCM(int,int);
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=LCM(a,b);
    printf("%d",c);
}
int LCM(int a,int b)
{
    int max=max(a,b),min=min(a,b),next=max;
    while(max%min!=0)
    {
        max+=next;
    }
    return max;
}
