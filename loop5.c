/*program to print the numbers which have 7 as last digit using loop*/
#include<stdio.h>
int main()
{
    int n;
    for( n=7; n <= 100; n += 10)
    {
        printf("\n%d",n);
    }
    return 0;
}