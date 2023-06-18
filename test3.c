#include<stdio.h>
void displaybit(unsigned int value);
int main(){
    unsigned int x;
    scanf("%u",&x);
    displaybit(x);
}
void displaybit(unsigned int value){
    unsigned int displaymark=1<<31;
    printf("%s%u\n%s%u\n","x:",value,"displaymark:",displaymark);
    for(unsigned int c=1;c<=32;c++){
        putchar(value&displaymark ?'1':'0');
        value<<=1;
        if(c%8==0)
            putchar(" ");
    }
}
