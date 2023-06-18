#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a=4,time=4,time2,len;
	char str[200];
	while(time--)
    {
        gets(str);
        len=strlen(str);
        for(time2=0;len>time2;time2++)
        {
            if(str[time2]==' ') a++;
        }
    }
    printf("%d",a);
}
