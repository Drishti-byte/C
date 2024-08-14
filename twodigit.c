/*program to check wheather number is two digit or not*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num >= 10 && num <= 99)
    printf("\nIt is a two digit number");
    else 
    printf("\nIt is not a two digit number");
    return 0;
}