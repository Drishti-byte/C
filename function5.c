/*program to print reverse of a number using functions*/
#include<stdio.h>
int reverse(int num)
{
    int rev=0,d;
    while(num != 0)
    {
        d= num % 10;
        rev = rev * 10 +d;
        num = num /10;
    }
    return rev;
}
int main()
{
    int n,r;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    r = reverse(n);
    printf("\nReverse of %d is %d",n,r);
    if(n == r)
    printf("\nIt is palindrome number");
    else
    printf("\nIt is not a palindrome number");
    return 0;
}