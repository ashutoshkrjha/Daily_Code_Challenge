#include<stdio.h>

int main()
{
  int n;
  int sum3;
  int sum5;
  int sum15;
  int x;
  int y;
  int z;
  scanf("%d",&n);
  x=(n-1)/3;
  y=(n-1)/5;
  z=(n-1)/15;
  sum3=3*(x*(x+1))/2;
  sum5=5*(y*(y+1))/2;
  sum15=15*(z*(z+1))/2;
  printf("%d",sum3+sum5-sum15);
}
