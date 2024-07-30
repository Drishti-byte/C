/*program to print sum and multiplication of three numbers*/
#include <stdio.h>
int main()
{
    int n1,n2,n3,sum,multiplication;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    printf("Enter third number:");
    scanf("%d",&n3);
    sum= n1+n2+n3;
    printf("\nsum is %d",sum);
    multiplication= n1*n2*n3;
    printf("\nProduct is %d",multiplication);
    return 0;
}