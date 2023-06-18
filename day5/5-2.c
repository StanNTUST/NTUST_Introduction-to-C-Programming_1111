#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    while(a!=1)
    {
        for(b=2;a>=b;b++)
        {
            if(a%b==0)
            {
                a/=b;
                printf("%d\n",b);
                break;
            }
        }
    }
}
