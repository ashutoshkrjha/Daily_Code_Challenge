#include<stdio.h>
int size=10000;
int A[10000];
int B[10000];

void quicksort(int A[],int begin,int end)
{
    if(begin<end){
    int i=begin;
    int j=end;
    int k;
    int pivot=begin;

    for(k=begin+1;k<=end;k++)
    {
        if(A[k]>A[pivot])
        {
            B[j]=A[k];
            j--;
        }
        else
        {
            B[i]=A[k];
            i++;
        }
    }

    B[i]=A[pivot];

    for(k=begin;k<=end;k++)
    {
        A[k]=B[k];
    }

    quicksort(A,begin,i-1);
    quicksort(A,i+1,end);
    }
}

int main()
{

    FILE *myFile;
    myFile = fopen("QuickSort.txt", "r");


    int i;
    for (i = 0; i < 10000; i++)
    {
        fscanf(myFile, "%d", &A[i]);
    }


    /* Testing out the code
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    */

    quicksort(A,0,size-1);

    for(i=0;i<size;i++)
    {
        printf("%d\n",A[i]);
    }
}
