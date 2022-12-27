#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter the rows and columns of matrix \n");
    scanf("%d%d",&r1,&c1);
    int arr1[r1][c1],arr2[r1][c1],arr3[r1][c1];
    printf("Enter the elements of matrix 1.\n");
    for (int  i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Enter the elements of matrix 2.\n");
    for (int  i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    printf("Matrix addition :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
        
    }
    
}