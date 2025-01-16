/*program to print the usage of pointers*/
#include<stdio.h>
int main()
{
    int m,n;
    n=20;
    m = n;
    int *p = &n;
    printf("%d %d %d",m,n,*p);
    m = 56;
    *p = 80;
    printf("\n%d %d %d",m,n,*p);
    return 0;
}