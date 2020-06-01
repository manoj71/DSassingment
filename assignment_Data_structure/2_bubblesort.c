//program to sort array using bubble sort
#include<stdio.h>
int main()
{
     int i,j,n;
    printf("enter length of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //bubble sort code
    for(i=0;i<n-1;i++)
      {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
            }
        }

    }
  printf("sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
