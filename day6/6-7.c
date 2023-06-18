#include<stdio.h>
int perfect(int a);
int main(){
    int a=2,b;
    while(a!=1000)
    {
        b=perfect(a);
        if(b>0)
        {
            int c,d[100],e=0,f=0;
            for(c=1;a>=c;c++)
            {
                if(a%c==0)
                {
                    d[e]=c;
                    f+=c;
                    e++;
                }
            }
            f-=a;
            if(f==a){
                printf("%d ",a);
                for(c=0;e-1>c;c++)
                {
                    printf("%d ",d[c]);
                }
                printf("\n");

            }
        }
        a++;
    }
}
int perfect(int a){
    int c,d[100],e=0,f=0;
    for(c=1;a>=c;c++)
    {
        if(a%c==0)
        {
            d[e]=c;
            f+=c;
            e++;
        }
    }
    f-=a;
    if(f==a){
        return a;
    }
    else
        return 0;
}
