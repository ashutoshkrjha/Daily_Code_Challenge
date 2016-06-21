//The following is an implementation of Karatsuba Multiplication. All the variables are in int. Honestly, the code starts to show effect only for 10-digit numbers or above.

#include<stdio.h>
#include<math.h>

long long ndigits(int n)
{
    if(n==0) return 1;
    long long x=0;
    while(n!=0)
    {
        n=n/10;
        x++;
    }
    return x;
}

long long halfnum(long long x, long long nx)
{
    long long i=0;
    while(i != nx/2)
    {
        x=x/10;
        i++;
    }

    return x;
}
long long karatmult(long long x, long long y)
{
    long long nx,ny,a,b,c,d,x0,x1,x2,x3;
    nx=ndigits(x);
    ny=ndigits(y);
    long long N = (long long)(fmax(nx, ny));
    N = (N/2) + (N%2);
    if(nx==1 | ny==1) return(x*y);

    a=halfnum(x,nx);
    b=x%(long long)(pow(10,nx/2));
    c=halfnum(y,ny);
    d=y%(long long)(pow(10,ny/2));

    x1=karatmult(a,c);
    x2=karatmult(b,d);
    x3=karatmult(a+b,c+d);
    x0=x3-x2-x1;

    return ((x1*pow(10,2*N))+(x0*pow(10,N))+x2);
}
int main()
{
    long long x,y,ans; //The two numbers to multiply
    printf("Enter the two numbers with same digits to multiply:\n");
    scanf("%lld %lld",&x,&y);
    ans=karatmult(x,y);
    printf("The answer is %lld",ans);
}
