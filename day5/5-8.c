#include<stdio.h>
int main(){
    int a=1,b,c,d,e,count=0,number=0;
    while(number!=120)
    {
        b = 0;
        c = a;
    while (c) {
         b = b * 10 + c % 10;
         c = c / 10;
     }
     if (b == a) {
         for(d=1;b>=d;d++)
         {
             if(b%d==0)
             {
                 count++;
             }
         }
         if(count==2)
         {
             printf("%d ",a);
             number++;
             if(number%10==0)
             {
                 printf("\n");
             }
         }
     }
     count=0;
     a++;
    }
}
