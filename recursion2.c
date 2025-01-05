/*program to print sum of digits using recursion*/
#include<stdio.h>
int sum(int n)
{
    if(n == 0)
    return 0;
    int s;
    s = n % 10 + sum(n / 10);
    return s;
}
int main()
{
    int num,res;
    printf("Enter the number:");
    scanf("%d",&num);
    res = sum(num);
    printf("\nSum of digits of %d is %d",num,res);
    return 0;
}