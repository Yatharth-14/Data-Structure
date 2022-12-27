#include <stdio.h>
int binary(int[], int beg,int end, int element);
int a[5];
int main()
{
    int search;
    printf("Enter array elements.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter searching element.\n");
    scanf("%d",&search);
    int y=binary(a[],a[0],a[4],search);
    if(y==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
    
    // while (beg<end)
    // {
    //     mid=(beg+end)/2;
    //     if(a[mid]==search)
    //     {
    //         printf("Element is found at %d.\n",mid);
    //         break;
    //     }
    //     else
    //     {
    //         if(a[mid]>search)
    //         {
    //             end=mid-1;
    //         }
    //         else
    //         {
    //             beg=mid+1;
    //         }
    //     }
    // }
    // if(beg>=end)
    // {
    //     printf("Element not found.");
    // }
    
    
    return 0;
}
int binary(int beg,int end, int element)
{
    int mid=(beg+end)/2;
    if(a[mid]==element)
    {
        return 1;
    }
    else if(a[mid]>element)
    {
        return binary(a[0],a[mid-1],element);
    }
    else if(a[mid]<element)
    {
        return binary(a[mid+1],a[0],element);
    }
}
