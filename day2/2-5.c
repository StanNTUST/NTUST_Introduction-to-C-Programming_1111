#include<stdio.h>

int main()
{
    float x0,y0,x1,y1,x2,y2,ans;
    scanf("%f%f",&x0,&y0);
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    ans=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
    if(ans>0)
    {
        printf("left");
    }
    if(ans==0)
    {
        printf("on");
    }
    if(ans<0)
    {
        printf("right");
    }
}
