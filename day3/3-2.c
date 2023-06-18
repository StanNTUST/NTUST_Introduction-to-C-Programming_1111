#include<stdio.h>
int main(){
    int a;
    double b,c;
        scanf("%d",&a);
    while(a!=-1)
    {
        scanf("%lf",&b);
        if(a<=40)
        {
            c=a*b;
        }
        else{
            c=b*40+(a-40)*(b*1.5);
        }
        printf("%.2lf\n",c);
        scanf("%d",&a);
    }
    return 0;
}
