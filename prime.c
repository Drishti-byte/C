/* program to print whether a number is prime or not */
#include <stdio.h>
int main()
{
    int n1;
    printf("Enter the number:");
    scanf("%d",&n1);
    if(n1 % 2 == 0)
    printf("Number is prime");
    if(n1 % 2 != 0);
    printf("Number is not prime");
    return 0;
}