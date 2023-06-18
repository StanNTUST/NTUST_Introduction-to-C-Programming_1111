#include <string.h>
#include <stdio.h>

int main()
{
    int len,small,big,i;
    char str[200];
    gets(str);
    len=strlen(str)-1;
    big=len;
    while(len>=0)
    {
        if(str[len]==' ')
        {
            small=len+1;
            for(i=small;i<=big;i++)
            {
                printf("%c",str[i]);
            }
            printf(" ");
            big=len-1;
        }
        len-=1;
    }
    for(i=0;i<=big;i++)
    {
        printf("%c",str[i]);
    }
    return(0);
}

