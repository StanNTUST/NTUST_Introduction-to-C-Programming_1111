#include<stdio.h>
#include<math.h>
void judge(int a,int b, int c);
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    judge(a,b,c);
}
void judge(int a,int b,int c){
    double d,e,f;
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("-1");
    }
    else{
        e= (-b*1.0+sqrt(d))/(2.00*a);
        f= (-b*1.0-sqrt(d))/(2.00*a);
        printf("%.2lf %.2lf",e,f);
    }
}
