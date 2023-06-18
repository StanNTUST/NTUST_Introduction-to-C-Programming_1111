#include<stdio.h>
int main(){
    float a[10],b=0,c=0,e;
    int d,f;
    for(d=0;d<10;d++)
    {
        scanf("%f",&a[d]);
    }
    for(d=0;d<10;d++)
    {
        if( a[d] &&a[d]>=c)
        {
            c=a[d];
        }
        if(c>=b)
        {
            e=b;
            b=c;
            c=e;
        }
    }
    printf("%.2f\n%.2f",b,c);
}
