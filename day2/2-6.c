#include<stdio.h>

int main()
{
    float x0,y0,r0,x1,y1,r1,d;
    scanf("%f%f%f",&x0,&y0,&r0);
    scanf("%f%f%f",&x1,&y1,&r1);
    d=(x0-x1)*(x0-x1)+(y0-y1)*(y0-y1);
    if(d<=(r0-r1)*(r0-r1))
    {
        printf("Inside");
    }
    else if(d<=(r0+r1)*(r0+r1))
    {
        printf("Overlap");
    }
    else
    {
        printf("Not overlap");
    }
}
