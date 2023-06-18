#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fact_calc(int i);
int len=0;
int main(){
    int i,b,num,num2;
    scanf("%d",&i);
    while(i!=-1)
    {
        num=fact_calc(i);
        if(0<=i && i<=9)
        {
            printf("%d*\n",num);
            for(b=0;b<len;b++)
            {
                printf("*");
            }
            puts("");
        }
        num2=num;
        while(num2!=0)
        {
            num2/=10;
            len++;
        }
        scanf("%d",&i);
    }
}
int fact_calc(int a){
    int number=1,b,tep;
    if(0<=a && a<=9)
    {
        len=7+(a-1)*2;
        if (len==0) len++;
        else
        {
            for(int i=a;i>=1;i--)
            {
                number*=i;
            }
        }
        tep=number;
        while(tep!=0)
        {
            tep/=10;
            len++;
        }
        for(b=0;b<len;b++)
        {
            printf("*");
        }
        puts("");
        if(a==0)
        {
            printf("*0!=");
            return 1;
        }
        else if(a==1)
        {
            printf("*1!=1=");
            return 1;
        }
        else
        {
            printf("*%d!=",a,a);
            for(int i=a;i>=2;i--)
            {
                printf("%dx",i);
            }
            printf("1=");
            return number;
        }
    }
    else
    {
        printf("Invalid entry\n");
        return 0;
    }
}
