#include<stdio.h>
int main(){
    int a,b=1,c=0;
        scanf("%d",&a);
   while(b!=a)
   {
       if(a%b==0)
       {
           c++;
       }
       b++;
   }
   if(c==1)
   {
        printf("%s","Yes");
   }
   else{
        printf("%s","No");
   }
    return 0;
}
