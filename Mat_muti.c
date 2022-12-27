#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the rows and columns of matrix 1\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns of matrix 2\n");
    scanf("%d%d",&r2,&c2);
    int arr1[r1][c1],arr2[r2][c2],arr3[10][10];
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
    if(c1!=r2)
    {
        printf("Multiplication is not possible.\n");
    }
    else
    {
        printf("Matrix multiplication\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum=0;
                for (int k = 0; k < r2; k++)
                {
                    sum+=arr1[i][k]*arr2[k][j];
                }
                arr3[i][j]=sum;
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
