/*program to print odd numbers from 1 to 15*/
#include<stdio.h>
int main()
{
    int n;
    for(n = 1; n <= 15; n += 2)
    {
        printf("\nOdd numbers are: %d",n);
    }
    return 0;
}