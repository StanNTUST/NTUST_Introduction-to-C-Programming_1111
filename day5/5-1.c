#include<stdio.h>
int main(){
    int a=0,b=1,c=0;
    do{
        a=b*b*b;
        b++;
        c++;
    }
    while(a<12000);
    printf("%d",c);
}
