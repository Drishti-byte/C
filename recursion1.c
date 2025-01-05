/*program to print factorial of a number using recursion*/
#include<stdio.h>
int fact(int n)
{
    if(n == 1)
    return 1;
    int r;
    r = n * fact(n-1);
    return r;
}
int main()
{
    int num,res;
    printf("\nEnter a number:");
    scanf("%d",&num);
    res = fact(num);
    printf("\nFactorial of %d is %d",num,res);
    return 0;
}