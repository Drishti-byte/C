/*program to find sum of array elements using pointer*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;
    printf("How many numbers are there:");
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(sizeof(int)*n);
    printf("\nEnter the numbers:");
    for(i=0; i < n;i++)
    {
        scanf("%d",a+i);//a[i]
    }
    printf("\nNumbers entered are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",*(a+i));
        sum = sum + a[i];
    }
    printf("\nSum of the numbers is: %d",sum);
    return 0;
}