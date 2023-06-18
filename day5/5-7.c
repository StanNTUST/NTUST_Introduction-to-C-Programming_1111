#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    for(a=1;1200>=a;a+=2)
    {
        b=a+2;
        d=0;
        e=0;
        for(c=1;b>=c;c++)
        {
            if(a%c==0)
            {
                d++;
            }
            if(b%c==0)
            {
                e++;
            }
        }
        if(d==2 && e==2)
        {
            printf("%d %d\n",a,b);
        }
    }
}
