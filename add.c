/*Program to print addition of two numbers */
#include <stdio.h>
int main()
{
    int n1,n2,sum;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("\nEnter second number:");
    scanf("%d",&n2);
    sum= n1+n2;
    printf("\nSum is %d",sum);
    return 0;
}