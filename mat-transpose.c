#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Enter the no. of rows and columns.\n");
    scanf("%d%d",&rows,&columns);
    int arr1[rows][columns],arr2[columns][rows];
    printf("Enter the matrix elements.\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
        
    }
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nYatharth yadav Roll no-2100321530197");
}