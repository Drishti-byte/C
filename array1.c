/*program to input 7 numbers in an array and print them*/
#include<stdio.h>
int main()
{
    int a[7],i;
    printf("Enter 7 numbers: ");
    for(i=0; i < 7; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe numbers entered by the user are: ");
    for(i=0; i < 7; i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}