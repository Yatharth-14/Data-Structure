#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of elements.\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = 0, pos = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min = a[i], pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                pos = j;
            }
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nYatharth yadav Roll no-2100321530197");
}