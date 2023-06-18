#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int main(){
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=max(a,b);
    e=min(a,b);
    f=min(c,d);
    d=max(c,d);
    if(d<e+f)
    {
        printf("%s","Yes");
    }
    else{
        printf("%s","No");
    }
    return 0;
}
