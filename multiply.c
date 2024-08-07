/*program to print the product of two numbers*/
#include <stdio.h>
int main()
{
    int n1,n2,p;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("\nEnter second number:");
    scanf("%d",&n2);
    p= n1 * n2;
    printf("\nProduct= %d",p);
    return 0;
}