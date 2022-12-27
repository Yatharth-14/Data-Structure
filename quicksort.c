#include<stdio.h>
void quick_sort(int a[],int start,int end);
int partition(int arr[], int s ,int e);
void quick_sort(int a[],int start,int end)
{
    // base condition
    if(start>=end)
    {
        
    }
    else
    {
        int p=partition(a,start,end);
        quick_sort(a,start,p-1);
        quick_sort(a,p+1,end);
    }
}
int partition(int a[], int s ,int e)
{
    int pivot=a[s],count=0;
    for (int i = 0; i < e; i++)
    {
        if(a[i]<=pivot)
        {
            count+=1;
        }
    }
    int pivotIndex=s+count;


    int temp=0;
    temp=a[pivotIndex];
    a[pivotIndex]=a[s];
    a[s]=temp;


    int i=s,j=e;
    while (i<pivotIndex && pivotIndex<j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && pivotIndex<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;j--;
        }
    }
    
    return pivotIndex;
}
int main()
{
    int n;
    printf("Enter array elements.\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
}