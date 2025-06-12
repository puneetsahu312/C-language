#include<stdio.h>
int main()
{
    int m,n,i,j,a[3][3];
    printf("enter number of rows and columns\n");
    scanf("%d %d",&m ,&n);
    printf("enter array element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("array element are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
    
    printf("\n");
    }


      // Create and initialize an array with 3 rows
  	// and 2 columns
    int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

    // Print each array element's value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
        }
      	printf("\n");
    }
    return 0;
}
daywork 10