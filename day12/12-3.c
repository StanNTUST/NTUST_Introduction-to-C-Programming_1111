#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void test(char str[]);
int main()
{
  char str[200],result;
  gets(str);
  test(str);
}
void test(char str[]){
	int low=4,high,area_code;
	long number=0;
	high=strlen(str);
    area_code=((int)(str[1])-48)*10+(int)str[2]-48;
    printf("%02d\n",area_code);
    while(low<high)
    {
        if(str[low]!='-')
        {
            number=number*10+(int)str[low]-48;
        }
        low+=1;
    }
    printf("%08d",number);
}
