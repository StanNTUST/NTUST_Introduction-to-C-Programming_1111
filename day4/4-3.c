#include<stdio.h>
int main(){
    int a;
    double b,c=0;
    scanf("%d",&a);
    while(a!=-1){

        scanf("%lf",&b);
        switch(a){
            case 1:
                c+=(2.98*b);
                break;
            case 2:
                c+=(4.50*b);
                break;
            case 3:
                c+=(9.98*b);
                break;
            case 4:
                c+=(4.49*b);
                break;
            case 5:
                c+=(6.87*b);
                break;
        }
        printf("%.2lf\n",c);
        scanf("%d",&a);
    }
}
