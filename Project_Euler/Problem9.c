#include<stdio.h>

int main()
{
	int a,b,c;
	for(a=1;a<1001;a++)
	{
		for(b=1;b<1001;b++)
		{
			for(c=1;c<1001;c++)
			{
				if(a+b+c==1000 && a*a+b*b==c*c) 
				{
					printf("%d\n",a*b*c);
					printf("a=%d\nb=%d\nc=%d\n",a,b,c); 
					break;
				}
			}
			if(a+b+c==1000 && a*a+b*b==c*c) break;
		}
		if(a+b+c==1000 && a*a+b*b==c*c) break;
	}
}
