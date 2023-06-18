#include <stdio.h>
#include <stdlib.h>
void reverse(const char * const str);
int main(int argc, char *argv[])
{
  char str[200];
  fgets(str,200,stdin);
  reverse(str);
}
void reverse(const char * const str){
    if('\0'==str[0]){
        return;
    }
    else{
        reverse(&str[1]);
        putchar(str[0]);
        system("pause");
    }
}
