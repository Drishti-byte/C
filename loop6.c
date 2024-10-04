/*program to print sum of even numbers from 1-10 using loop*/
#include<stdio.h>
int main()
{
    int n,sum = 0;
    for(n = 2; n <= 10;n += 2)
    {
        printf("\n%d",n);
        sum += n;
    }
    printf("\nSum is %d",sum);
    return 0;
}