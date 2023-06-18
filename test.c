#include <stdio.h>
#include <string.h>


int main() {
    char a,b,*arr[6][20];
    int len;
    for(a=0;a<6;a++) scanf("%s", &arr[a]);
    len=strlen(arr[5]);
    arr[5][len-1]="\0";

    for(a=1;a<6;a++)
    {
        for(b=1;b<6;b++)
        {
            if(strcmp(arr[b],arr[b-1])<0)
            {
                char tmp[strlen(arr[b])];
                strcpy(tmp,arr[b]);
                strcpy(arr[b],arr[b-1]);
                strcpy(arr[b-1],tmp);
            }
        }
    }
    printf("\"%s\"",arr[0]);
    for(a=1;a<6;a++)
    {
        printf(",\"%s\"",arr[a]);
    }
}
