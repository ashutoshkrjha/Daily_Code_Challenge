#include<stdio.h>

int fib(int n)
{
	if(n==1) return 1;
	if (n==2) return 2;
	return (fib(n-1)+fib(n-2));
}

int main()
{
	int n;
	int i;
	int x;
	int sum;
	sum=0;
	scanf("%d",&n);
	for(i=1;i>-1;i++)
	{
	x=fib(i);
	if(x>n) break;
	if(x%2==0) sum=sum+x;	
	}
	printf("%d",sum);
}
