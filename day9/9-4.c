#include<stdio.h>
int main()
{
	int a,b,c,d,e,row,row2,colum,colum2;
	scanf("%d%d",&row,&colum);
	scanf("%d%d",&row2,&colum2);
	int m[10][10],m2[10][10];
	for(a=0;a<row;a++)
	{
		for(b=0;b<colum;b++)
		{
			scanf("%d",&m[a][b]);
		}
	}
	for(a=0;a<row2;a++)
	{
		for(b=0;b<colum2;b++)
		{
			scanf("%d",&m2[a][b]);
		}
	}
	for(a=0;a<row;a++)
	{
			for(c=0;c<colum2;c++)
			{
				e=0;
				for(d=0;d<row2;d++)
				{
					e=e+m[a][d]*m2[d][c];
				}
				if(c==colum2-1) printf("%d",e);
				else printf("%d ",e);
			}
		if(a!=row-1) printf("\n");
	}
}



