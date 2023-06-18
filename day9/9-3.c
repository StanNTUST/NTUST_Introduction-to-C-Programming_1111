#include<stdio.h>
void sort (int m[][2], int row);
int main()
{
	int a,b,c, row;
	scanf("%d",&row);
	int m[row][2];
	for(a=0;a<row;a++)
	{
		scanf("%d",&m[a][0]);
		scanf("%d",&m[a][1]);
	}
	sort (m, row);
}
void sort (int m[][2], int row)
{
	int a,b,c,d;
	for(d=0;d<row-1;d++)
	{
		for(a=0;a<row-1;a++)
		{
			if(m[a][0]<m[a+1][0])
			{
				b=m[a+1][0];
				m[a+1][0]=m[a][0];
				m[a][0]=b;
				b=m[a+1][1];
				m[a+1][1]=m[a][1];
				m[a][1]=b;
			}
		}
	}
	for(d=0;d<row-1;d++)
	{
		for(a=0;a<row-1;a++)
		{
			if(m[a][0]==m[a+1][0])
			{
				if(m[a][1]<m[a+1][1])
				{
					b=m[a+1][0];
					m[a+1][0]=m[a][0];
					m[a][0]=b;
					b=m[a+1][1];
					m[a+1][1]=m[a][1];
					m[a][1]=b;
				}
			}
		}
	}
	for(a=0;a<row;a++)
	{
		printf("%d %d\n",m[a][0],m[a][1]);
	}
}

