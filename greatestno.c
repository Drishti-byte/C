/*program to print the greatest number */
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter First number:");
    scanf("%d",&n1);
    printf("\nEnter second number: ");
    scanf("%d",&n2);
    printf("\nEnter third number:");
    scanf("%d",&n3);
    if(n1 > n2 && n1 > n3)
    printf("\n%d is the greatest number",n1);
    if(n2 > n1 && n2 > n3)
    printf("\n%d is the greatest number",n2);
    if(n3 > n2 && n3 > n1)
    printf("\n%d is the greatest number",n3);
    return 0;

}