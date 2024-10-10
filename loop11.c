/*program to print sum of digits*/
#include<stdio.h>
int main()
{
    int sum=0,d,num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=num;

    while(num != 0)
    {
        d = num % 10;
        num = num / 10;
        sum = sum+d;
    }
    printf("\nSum of digits of %d is %d",a,sum);
    return 0;
}