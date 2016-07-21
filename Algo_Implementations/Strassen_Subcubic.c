#include<stdio.h>

void strassen(int A[],int B[], int C[], int n)
{

}

int main()
{
    printf("Enter the size of matrix (2^n x 2^n ONLY)\n");
    int n;
    scanf("%d",&n);

    int A[n][n];
    int B[n][n];
    int C[n][n];
    int i,j;

    printf("Enter the First Matrix in Row Major format\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the Second Matrix in Row Major format");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    strassen(A,B,C,n);

}
