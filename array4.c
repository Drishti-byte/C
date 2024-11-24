/*program to print the greatest number using arrays*/
#include<stdio.h>
int main()
{
    int i,a[7],max=0,n;
    printf("How many numbers are there: ");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(i=0; i < 7; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe numbers entered by the user are:");
    for(i=0; i < 7;i++)
    {
        printf("\n%d",a[i]);
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nGreatest number is %d",max);
    return 0;
}