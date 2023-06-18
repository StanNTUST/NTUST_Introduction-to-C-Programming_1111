#include<stdio.h>
#include<math.h>
int functionisEven(int a);
int main(){
    int a,b;
    scanf("%d",&a);
    while(a!=0){
        b=functionisEven(a);
        printf("%d ",b);
        scanf("%d",&a);
    }
}
int functionisEven(int a){
    if(a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
