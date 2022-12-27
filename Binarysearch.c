#include <stdio.h>
int main()
{
    int a[5],search,beg,end,mid=0;
    printf("Enter array elements.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter searching element.\n");
    scanf("%d",&search);
    beg=a[0];end=a[4];
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==search)
        {
            printf("Element is found at %d.\n",mid);
            break;
        }
        else
        {
            if(a[mid]>search)
            {
                end=mid-1;
            }
            else
            {
                beg=mid+1;
            }
        }
    }
    if(beg>end)
    {
        printf("Element not found.");
    }
    printf("\nYatharth yadav Roll no-2100321530197");    
    return 0;
}
