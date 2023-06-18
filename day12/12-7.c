#include<stdio.h>
#include<string.h>
int main(){
    char search[20],text[200],*locate;
    int a,len;
    gets(text);
    gets(search);
    len=strlen(search);
    locate=strstr(text,search);
    while(locate!=NULL)
    {
        printf("%s\n",locate);
        for(a=0;a<len;a++)
        {
            locate[a]=' ';
        }
        locate=strstr(locate,search);
    }
}
