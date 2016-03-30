#include<stdio.h>

long palindrome(long n)
{
	long n1,rev,rem;
	rev=0;
	n1 = n;
	while (n > 0)
	{
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
	}
    
	if (n1 == rev) return 1;
	else return 0;
}

int main()
{
	long i;
	long j;
	long max;
	
	max=10000;
	for(i=100;i<1000;i++)
	{
		for(j=100;j<1000;j++)
		{
			if(palindrome(i*j)==1 && i*j>max) 
			{
			max=i*j;
			}
		}
	}
	printf("%ld\n",max);
}
