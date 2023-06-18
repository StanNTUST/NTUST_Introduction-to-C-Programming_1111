#include<stdio.h>
int flip();
int main(){
    int a,b=1000,c=0,d=0;
    srand(48763);
    while(b--)
    {
        a=flip();
        if(a==0)
        {
            c++;
            printf("%s\n","Tails");
        }
        if(a==1)
        {
            d++;
            printf("%s\n","Heads");
        }
    }
    printf("%d %d",c,d);
}
int flip(){
    int e;
    e=rand();
    return e%2;
}
