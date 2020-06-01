//Program to sort an array using quick sort
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter lenght of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void quicksort(int a[],int lb,int ub)
{   int loc;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{   int start,end;
    int pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return (end);
}


