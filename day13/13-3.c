#include<stdio.h>
struct fraction{
    int number;
};
void reduce(struct fraction f, struct fraction * reduced_f);
int main(){
    struct fraction f,reduce_f;
    scanf("%d/%d",&f.number,&reduce_f.number);
    reduce(f,&reduce_f);
}
void reduce(struct fraction f, struct fraction * reduced_f)
{
    int a,b,c,tmp;
    b=f.number;
    c=reduced_f->number;
    if(c>b)
    {
        tmp=b;
        b=c;
        c=tmp;
    }
    do{
        c%=b;
        tmp=b;
        b=c;
        c=tmp;
    }while(b!=0);
    printf("%d/%d",f.number/c,reduced_f->number/c);
}
