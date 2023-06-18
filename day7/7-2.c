#include<stdio.h>
int main(){
    char a='y';
    int b,c,d;
    srand(48763);
    c=rand()%1000+1;
    while(a=='y')
    {
        scanf("%d",&b);
        if(b>c)
        {
            printf("High\n");
        }
        else if(b<c)
        {
            printf("Low\n");
        }
        else{
            printf("Congratulations\n");
            scanf(" %c",&a);
            c=rand()%1000+1;
        }
    }
}
