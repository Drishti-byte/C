/*program to print fibonacci series*/
#include<stdio.h>
int main()
{
    int a,b,c,n;
    a = 0;
    b = 1;
    for(n=0; n <= 10;n++)
    {
        c = a + b;
        printf("\n%d",c);
        a = b;
        b = c;
    }
    return 0;
}