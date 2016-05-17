#include<stdio.h>

int main()
{
	int n;
	printf("Give the n:\n");
	scanf("%d",&n);
	int i;
	int A[n+1];
	int B[n+1];
	A[0]=0;
	B[0]=0;
	printf("Give A in n-bit binary:\n");
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Give B in n-bit binary:\n");
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&B[i]);
	}
	int C[n+1];
	int c;
	c=0;
	for(i=n;i>=0;i--)
	{
		if(c+A[i]+B[i]==0)
		{
			C[i]=0;
			c=0;
		}

		if(c+A[i]+B[i]==1)
		{
			C[i]=1;
			c=0;
		}

		if(c+A[i]+B[i]==2)
		{
			C[i]=0;
			c=1;
		}

		if(c+A[i]+B[i]==3)
		{
			C[i]=1;
			c=1;
		}
	}
	printf("C is \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d  ",C[i]);
	}
	printf("\n");
	printf("B is \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d  ",B[i]);
	}
}
