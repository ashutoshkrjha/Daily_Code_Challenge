#include<stdio.h>

int main()
{
	int n;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int A[n];
	int i,j;
	int v;
	int key;
	printf("Enter the numbers in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the value\n");
	scanf("%d",&v);
	int count=0;
	for(i=0;i<n;i++)
	{
		if(A[i]==v)
		{
			printf("The number %d appears at index %d\n",v,i);
			count++;
		}
	}
	if(count==0) printf("%d does not appear in the array\n",v);
}
