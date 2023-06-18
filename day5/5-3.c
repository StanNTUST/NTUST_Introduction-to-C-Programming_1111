#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    for(b=a;b>=1;b--)
    {
        for(c=b;c>0;c--)
        {
            printf("%d ",c);
        }
        for(c=2;b>=c;c++)
        {
            printf("%d ",c);
        }
            printf("\n");
    }
}
