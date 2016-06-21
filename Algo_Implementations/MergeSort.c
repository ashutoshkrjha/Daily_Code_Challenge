#include<stdio.h>

void part(int arr[],int min,int max,int n)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid,n);
   part(arr,mid+1,max,n);
   merge(arr,min,mid,max,n);
 }
}

void merge(int arr[],int min,int mid,int max,int n)
{
  int tmp[n];
  int i,j,k,m;
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}

int main()
{
    int n;
    printf("Give the number of inputs to array:\n");
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    part(A,0,n-1,n);

    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
