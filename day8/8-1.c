#include<stdio.h>
int C(int a,int b);
int main()
{
	long a,b,c;
	scanf("%ld %ld",&a,&b);
	c=C(a,b);
	printf("%ld",c);
}
int C(int a,int b)
{
	if(b==0)return 1;
	else if(a==b) return 1;
	else
	{
		return C(a-1,b-1)+C(a-1,b);
	}
}
