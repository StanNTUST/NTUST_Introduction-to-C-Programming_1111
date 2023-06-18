#include<stdio.h>
int emirp(int c);
int main(){
    int a=0,b,c=2,d,count;
    while(a!=120)
    {
        count=0;
        for(d=1;c>=d;d++)
        {
            if(c%d==0)
                count++;
        }
        if(count==2)
        {
            b=emirp(c);

            if(b>=1)
            {
                printf("%d ",c);
                a++;
                if(a%10==0)
                {
                    printf("\n");
                }
            }
        }
        c++;
    }
}
int emirp(int c){
    int e,f=0,g,count2=0;
    e=c;
    while(e!=0)
    {
        f=f*10+e%10;
        e/=10;
    }
    for(g=1;f>=g;g++)
    {
        if(f%g==0)
            count2++;
    }
    if(count2==2){
        return 1;
    }
    else{
        return 0;
    }
}
