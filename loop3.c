/*program to print numbers from 19 to 3 using loop*/
#include<stdio.h>
int main()
{
    int n;
    for( n=19; n >= 3; n -= 4)
    {
        printf("\n%d",n);
    }
    return 0;
}