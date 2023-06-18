#include <stdio.h>
#include<string.h>
int main(){
    FILE *fptr,*fptr2,*fptr3;
    char name[300],name2[300],name3[300]="";
    fptr = fopen("14_1file1.txt","r");
    fptr2 = fopen("14_1file2.txt","r");
    fptr3 = fopen("result.txt","w");
    fscanf(fptr,"%[^\0]s ",name);
    fscanf(fptr2,"%[^\0]s ",name2);
    printf("%s\n%s",name,name2);
    strcat(name3,name);
    strcat(name3,name2);
   	fprintf( fptr3, "%s", name3 );
    fclose(fptr);
    return 0;
}
