#include <stdio.h>
int main()
{
    int a[11] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        printf("Enter the number.\n");
        scanf("%d", &num);
        int x = num % 11;
        if (a[x] == 0)
        {
            a[x] = num;
        }
        else
        {
            int l = 1;
            while (x + l < 11)
            {
                if (a[x + l] == 0)
                {
                    a[x + l] = num;
                    break;
                }
                l++;
            }
            int k = 0;
            while (x + l >= 11)
            {
                x = 0;
                if (a[x + k] == 0)
                {
                    a[x + k] = num;
                    break;
                }
                k++;
            }
        }
    }
    printf("array.\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }
}