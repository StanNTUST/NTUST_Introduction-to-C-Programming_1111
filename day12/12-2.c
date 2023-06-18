#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int test(char str[]);
int main(int argc, char *argv[])
{
  char str[200],result;
  gets(str);
  result=test(str);
  if(result) printf("True");
  else printf("False");
}
int test(char str[]){
	int low=0,high,result=1;
	high=strlen(str)-1;
	while(low<high)
    {
        if(str[low]==' '||str[low]==','||str[low]=='.')
        {
            low+=1;
            continue;
        }
        else if(str[high]==' '||str[high]==','||str[high]=='.')
        {
            high-=1;
            continue;
        }
        else
        {
            if(str[low]!=str[high])
            {
                result=0;
                break;
            }
            else
            {
                low+=1;
                high-=1;
            }
        }
    }
    return result;
}
