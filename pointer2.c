/*program to use malloc function(dynamic memory allocation)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("How many numbers are there:");
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(sizeof(int)*n);
    printf("\nEnter the numbers:");
    for(i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nNumbers entered are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}