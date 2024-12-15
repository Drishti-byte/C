/*program to do bubble sort*/
#include<stdio.h>
int main()
{
    int a[7],i,j,n=7,temp;
    printf("How many numbers are there:");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe numbers entered are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    for(i=0; i < n-1;i++)
    {
        for(j=0; j < n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nAfter sorting numbers are:");
    for(i=0;i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}