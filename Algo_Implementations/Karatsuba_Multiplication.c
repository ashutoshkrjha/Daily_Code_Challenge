//The following is an implementation of Karatsuba Multiplication. All the variables are in int. Honestly, the code starts to show effect only for 10-digit numbers or above.

#include<stdio.h>
#include<math.h>

int ndigits(int n)
{
    if(n==0) return 1;
    int x=0;
    while(n!=0)
    {
        n=n/10;
        x++;
    }
    return x;
}

int halfnum(int x, int nx)
{
    int i=0;
    while(i != nx/2)
    {
        x=x/10;
        i++;
    }

    return x;
}
int karatmult(int x, int y)
{
    int nx,ny,a,b,c,d,x0,x1,x2,x3;
    nx=ndigits(x);
    ny=ndigits(y);
    int N = (int)(fmax(nx, ny));
    N = (N/2) + (N%2);
    if(nx==1 | ny==1) return(x*y);

    a=halfnum(x,nx);
    b=x%(int)(pow(10,nx/2));
    c=halfnum(y,ny);
    d=y%(int)(pow(10,ny/2));

    x1=karatmult(a,c);
    x2=karatmult(b,d);
    x3=karatmult(a+b,c+d);
    x0=x3-x2-x1;

    return ((x1*pow(10,2*N))+(x0*pow(10,N))+x2);
}
int main()
{
    int x,y,ans; //The two numbers to multiply
    printf("Enter the two numbers with same digits to multiply:\n");
    scanf("%d %d",&x,&y);
    ans=karatmult(x,y);
    printf("The answer is %d",ans);
}
