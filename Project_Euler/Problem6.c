#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int sumsquare,squaresum,diff;
	sumsquare=(n*(n+1)/2)*(n*(n+1)/2);
	squaresum=n*(n+1)*(2*n+1)/6;
	diff=sumsquare-squaresum;
	printf("%d",diff);
}
