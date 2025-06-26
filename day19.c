#include<stdio.h>
int findMax(int *arr, int size)
{
 int max = *arr;
 for (int i=1; i<size; i++)
 {
    if (*(arr+i)>max)
    {
        max = *(arr+i);
    }
 }
 return max;
}
int main()
{
    int arr[] = {4, 2, 9, 6, 5, 1, 8, 3, 7};
    int size = sizeof(arr) /  sizeof(arr[0]);
    printf("Array element:");
    for (int i=0; i<size; i++)
    {
        printf("%d", *(arr+i));
    }
    printf("\n");
    int max = findMax(arr, size);
    printf("Maximum number: %d\n", max);
    return 0;
}