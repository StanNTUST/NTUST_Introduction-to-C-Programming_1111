#include<stdio.h>
#include<string.h>
int main(){
     struct number {
         double real_number;
         double imaginary_number;
    };
    struct number number1,number2,totalnumber;
    scanf("%lf+%lfi",&number1.real_number,&number1.imaginary_number);
    scanf("%lf+%lfi",&number2.real_number,&number2.imaginary_number);
    totalnumber.real_number=number1.real_number+number2.real_number;
    totalnumber.imaginary_number=number1.imaginary_number+number2.imaginary_number;
    printf("%.1lf+%.1lfi",totalnumber.real_number,totalnumber.imaginary_number);

}

