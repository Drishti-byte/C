/*program to swap two numbers using a third variable*/
#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("\nValues of a,b and c before swapping are: %d %d %d",a,b,c);
    c=a;
    a=b;
    b=c;
    printf("\nValues of a,b and c after swapping are: %d %d %d",a,b,c);
    return 0;
}