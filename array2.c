/*program to print numbers in reverse order*/
#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter 10 numbers");
    for(i=0; i < 10; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe numbers entered by the user are: ");
    for(i=0; i < 10; i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEntered numbers in reverse order are");
    for(i=9; i >= 0; i--)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}