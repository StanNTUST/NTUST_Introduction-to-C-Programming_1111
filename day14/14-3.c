#include <stdio.h>
#include<string.h>
int main(){
    FILE *fptr,*fptr2,*fptr3;
    char name[3][300],name2[3][300];
    int number[3],number2[5],count=1,count2=1,a,b,find;
    double score[3],score2[5];
    fptr = fopen("14_3oldmast.txt","r");
    fptr2 = fopen("14_3trans.txt","r");
    fscanf(fptr2,"%d %lf",&number2[0],&score2[0]);
    while(!feof(fptr2))
    {
    	fscanf(fptr2,"%d %lf",&number2[count],&score2[count]);
    	count++;
	}
	fscanf(fptr,"%d %s %s %lf",&number[0],name[0],name2[0],&score[0]);
    while(!feof(fptr))
    {
    	fscanf(fptr,"%d %s %s %lf",&number[count2],name[count2],name2[count2],&score[count2]);
    	count2++;
	}
	for(a=0;a<count-1;a++)
	{
		find=0;
		for(b=0;b<count2-1;b++)
		{
			if(number[b]==number2[a])
			{
				find=1;
				score[b]+=score2[a];
				printf("%d %s %s %.2lf\n",number[b],name[b],name2[b],score[b]);
			}
		}
		if(find==0)
		{
			printf("Unmatched transaction record for account number %d\n",number2[a]);
		}
	}
	fptr3 = fopen("newmast.txt","w");
	for(b=0;b<count2-1;b++)
	{
		fprintf( fptr3, "%d %s %s %.2lf\n",number[b],name[b],name2[b],score[b]);
	}
    return 0;
}
