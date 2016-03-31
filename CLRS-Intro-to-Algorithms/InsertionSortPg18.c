#include<stdio.h>

int main()
{
	int n;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int A[n];
	int i,j;
	int key;
	printf("Enter the numbers in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(j=1;j<n;j++)
	{
		key=A[j];
		i=j-1;
		while(i>=0 && A[i]>key)
		{
			A[i+1]=A[i];
			i=i-1;
		}
		A[i+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
