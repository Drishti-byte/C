/* program to check wheather the number is positive, negative or zero */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num > 0)
    printf("Number is positive");
    if(num < 0)
    printf("Number is negative");
    if(num == 0)
    printf("Number is zero");
    return 0;
}