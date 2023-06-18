#include<stdio.h>
int main()
{
	int a[5],b[5],c,d;
	for(c=0;c<5;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=0;c<5;c++)
	{
		scanf("%d",&b[c]);
	}
	for(c=0;c<5;c++)
	{
		for(d=0;d<5;d++)
		{
			if(a[c]==b[d])
			{
				printf("%d ",a[c]);
			}
		}
	}
}
