//Highly inefficient Code Ahead

#include<stdio.h>

long long isprime(long long n)
{
	if(n==2) return 1;
	if(n==3) return 1;
	long long i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	long long n;
	long long i;
	scanf("%lld",&n);
	long long max=1;
	for(i=2;i<n+1;i++)
	{
		if(n%i==0 && isprime(i) && i>max) max=i;	
	}
	printf("%lld",max);
}
