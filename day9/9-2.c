#include<stdio.h>
int main()
{
	int a[5][5],c,d,e,row[5],colum[5],big=0,big2=0;
	for(c=0;c<=4;c++)
	{
		row[c]=0;
		for(d=0;d<=4;d++)
		{
			e=rand()%2;
			a[c][d]=e;
			row[c]+=e;
		}
	}
	for(c=0;c<=4;c++)
	{
		colum[c]=0;
		for(d=0;d<=4;d++)
		{
			colum[c]+=a[d][c];
		}
	}
	for(c=0;c<=4;c++)
	{
		for(d=0;d<=4;d++)
		{
			printf("%d ",a[c][d]);
		}
		printf("\n");
	}
	for(c=0;c<=4;c++)
	{
		if(row[c]>row[big]) big=c;
		if(colum[c]>colum[big2]) big2=c;
	}
	printf("%d %d",big,big2);
}
