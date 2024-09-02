/*program to check whether year is a leap year or not*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year % 400 == 0)
    {
        printf("\nIt is a leap year");
    }
    if(year % 400 != 0)
    {
        printf("\nIt is not a leap year");
    }
    return 0;
}