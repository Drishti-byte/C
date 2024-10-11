/*program to print reverse of a number*/
#include<stdio.h>
int main()
{
    int d,num,rev=0,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=num;
    while(num != 0)
    {
        d = num % 10;
        num = num /10;
        rev = rev * 10 + d;
    }
    printf("\nReverse of %d is %d",a,rev);
    return 0;
}