/*program to increase values of integers*/
#include<stdio.h>
int increase(int *num)
{
    *num = *num +5;
}
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nBefore increase values are %d and %d",a,b);
    increase(&a);
    increase(&b);
    printf("\nAfter increase values are %d and %d",a,b);
    return 0;
}