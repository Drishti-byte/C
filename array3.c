/*program to print sum of the numbers using array*/
#include<stdio.h>
int main()
{
    int i,a[7],n,sum=0;
    printf("How many numbers are there: ");
    scanf("%d",&n);
    printf("\nEnter the numbers: ");
    for(i=0; i < n; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEntered numbers by the user are");
    for(i=0; i < n; i++)
    {
        printf("\n%d",a[i]);
        sum = sum + a[i];
    }
    printf("\nSum is %d",sum);
    return 0;
}
