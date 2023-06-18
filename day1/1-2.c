#include<stdio.h>

int main()
{
    int hr,min,sec,a,b;
    scanf("%d",&a);
    hr=a/3600;
    b=a-hr*3600;
    min=b/60;
    sec=b-min*60;
    printf("%d:%d:%d",hr,min,sec);
    return 0;
}
