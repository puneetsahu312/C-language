#include<stdio.h>
int main()
{
    int matrix[3][3];
    int *ptr = &matrix[0][0];
    printf("enter 3*3 matrix elements:\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d", ptr+i*3+j);
        }
    }
    printf("matrix elements:\n");
    for (int i=0; i<9; i++)
    {
       printf("%d", *(ptr+i));
       if ((i+1)%3 == 0)
     {
        printf("\n");
     }
    }
return 0;
}