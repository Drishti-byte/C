/*program to do insertion sort*/
#include<stdio.h>
int main()
{
    int a[7],i,j,n=7,temp;
    printf("Enter the elements are there:");
    for(i=0; i < 7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j < n;j++)
    {
        temp = a[j];
        i = j - 1;
        while(a[i] > temp && i > -1)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = temp;
    }
    printf("\nAfter sorting elements are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}