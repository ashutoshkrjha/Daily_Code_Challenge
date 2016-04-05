#include<stdio.h>

long ptrip(long a,long b,long c)
{
	if(a*a+b*b==c*c) return 1;
	else return 0;
}

long main()
{
	long a,b,c,p,x,pmax,max;
	pmax=0;
	max=0;
	
	for(p=3;p<=1000;p++)
	{
	x=0;
	for(a=1;a<p;a++)
		{
		for(b=1;b<p;b++)
			{
				for(c=1;c<p;c++)
				{
					if(ptrip(a,b,c)==1 && a+b+c==p) x++;
				}
			}
		}
	if(x>max) {pmax=p;max=x;}
	}
	printf("%ld",pmax);
}
