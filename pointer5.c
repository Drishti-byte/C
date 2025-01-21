/*program to use pointer to pointer*/
#include<stdio.h>
int main()
{
    int n=50;
    int *p = &n;
    int **q = &p;
    printf("%d",n);
    printf("\n%d",*p);
    printf("\n%d",**q);
    return 0;
}