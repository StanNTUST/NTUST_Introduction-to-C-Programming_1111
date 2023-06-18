#include<stdio.h>
int main(){
    int a,b=0,c[10000],d,e=0,max;
    scanf("%d",&a);
    max=a;
    while(a!=0)
    {
        c[b]=a;
        if(a>=max)
        {
            max=a;
            e=0;
            for(d=0;b+1>=d;d++)
            {
                if(a==c[d])
                {
                    e++;
                }
            }
        }
        scanf("%d",&a);
        b++;
    }
    printf("%d\n",max);
    printf("%d",e);
}
