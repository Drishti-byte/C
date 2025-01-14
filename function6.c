/*program to swap two numbers using a third variable*/
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nAfter swapping numbers are %d and %d",*x,*y);
}
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swapping numbers are %d and %d",a,b);
    swap(&a,&b);
    printf("\nAfter swap numbers are %d and %d",a,b);
    return 0;
}