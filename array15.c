/*program to do selection sort*/
#include<stdio.h>
int main()
{
    int a[10],i,j,n,temp;
    printf("How many numbers are there:");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i < n-1;i++)
    {
        for(j=i+1; j < n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                temp = a[j];
            }
        }
    }
    printf("\nSorted numbers are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}