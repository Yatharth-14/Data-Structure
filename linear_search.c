#include <stdio.h>
#define n 5
int main()
{
    int arr[n], search, flag = 0;
    int pos = 0;
    printf("Enter array elements.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the searching element.\n");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
            pos = i;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element is found at %d\n", pos+1);
    }
    else
    {
        printf("Element not found.");
    }
    printf("\nYatharth yadav Roll no-2100321530197");
    return 0;
}
