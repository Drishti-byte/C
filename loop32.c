/*program to divide two numbers without using / sign*/
#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    while(a >= b)
    {
        a = a - b;
        count++;
    }
    printf("\nQuotient is %d",count);
    printf("\nRemainder is %d",a);
    return 0;
}