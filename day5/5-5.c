#include<stdio.h>
int main(){
    int a,b,c=0;
    for(a=1;7>a;a++)
    {
        for(b=a+1;7>=b;b++)
        {
            printf("%d %d\n",a,b);
            c++;
        }
    }
    printf("%d",c);
}
