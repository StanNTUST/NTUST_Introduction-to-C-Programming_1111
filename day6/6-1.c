#include<stdio.h>
int triangle(int a,int b, int c);
int main(){
    int a,b,c,result;
    scanf("%d%d%d",&a,&b,&c);
    result=triangle(a,b,c);
    if(result==1)
    {
        printf("true");
    }
    else{
        printf("false");
    }
}
int triangle(int a,int b,int c){
    int other,other2,max,d;
    max=a;
    other=b;
    other2=c;
    if(max<b){
        max=b;
        other=a;
    }
    if(max<c){
        d=max;
        max=c;
        other2=d;
    }
    if(other*other+other2*other2==max*max)
        return 1;
    else
        return 0;
}
