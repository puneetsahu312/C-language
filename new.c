#include<stdio.h>
int main()
{
  //Q1. Write a C program to perform binary search on the array of integers
    int i, n, low, high, mid,a[20],key;
    printf("enter the number of element\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
      {
        printf("successful search\n");
        exit(0);
      }
         if(key<a[mid])
         {
            high=mid-1;
         }
         else
         {
            low=mid+1;
         }
    }
    printf("unsuccesfull search\n");

}


//Q2. Program to implement linear search.
#include<stdio.h>
int main()
{
    
    int i,n,a[10],key;
    
    printf("enter array element\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element\n");
    scanf("%d",&key);
    for(i=0; i<n;i++)
    {if(key==a[i])
        {
            printf("successful search\n");
        
        }
    }
    printf("unsuccessful search\n");
    return 0;
}