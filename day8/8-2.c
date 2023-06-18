#include<stdio.h>
#include<math.h>
int isPrime(int a);
int main()
{
	long a,b,c;
	scanf("%ld",&a);
	c=isPrime(a);
	if(c)printf("True");
	else printf("False");
}
int isPrime(int a)
{
	static int b=2;
	double d=sqrt(a);
	if(a==2) return 1;
	if(a%b==0) return 0;
	else if(b>=d) return 1;
	else
	{
		b++;
		return  isPrime(a);
	}
}
