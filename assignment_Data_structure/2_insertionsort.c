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
    //insertion sort code
    for(int j=1;j<n;j++)
    {
        int k=a[j];
        i=j-1;
        while(i>0&&a[i]>k)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=k;
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
