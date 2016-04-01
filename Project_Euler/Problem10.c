#include<stdio.h>
#include<math.h>

long long isprime(long long n)
{
	if(n==2) return 1;
	if(n==3) return 1;
	long long i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	long long i,sum;
	sum=0;
	for(i=2;i<2000000;i++)
	{
		if(isprime(i)==1) sum=sum+i;
	}
	printf("%lld",sum);
}
