#include<stdio.h>
int getPentagonalNumber(int a);
int main(){
    long a=1,b;
    while(a<=100){
        b=getPentagonalNumber(a);
        printf("%7d",b);
        if(a%10==0)
        {
            printf("\n");
        }
        a++;
    }
}
int getPentagonalNumber(int a){
    return (a*(3*a-1))/2;
}
