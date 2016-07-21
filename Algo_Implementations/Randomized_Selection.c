//The purpose is to find the kth smallest element in an array in O(nlogn) time.

#include<stdio.h>

int ransel(int* A, int begin, int end, int k)
{
    int check,mid;
    if(k<=end)
    {
    if(begin == end) return A[begin];
    if(begin<end){
    int pivot,i,j;
    pivot=begin;
    i=begin;
    j=begin+1;
    while(j<=end)
    {
        if(A[j]<=A[pivot])
        {
            swaparr(A,i+1,j);
            i++;
        }
        j++;
    }
    swaparr(A,begin,i+1);

    mid=i+1;
    check=mid-begin+1;
    if(check==k) return A[mid];
     else if(k < i)
        return ransel(A, begin, mid-1, k);
    else
        return ransel(A, mid+1, end, k-check);
}
    }
    else
    {
        return -1;
    }
}

void swaparr(int *A,int i,int j)
{
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

int main()
{
    int n,k;
    printf("Give the size of array: ");
    scanf("%d",&n);
    int A[n];
    printf("Give the array: ");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Give k: ");
    scanf("%d",&k);

    int ans;

    ans=ransel(A,0,n-1,k-1);

    printf("%d",ans);
}
