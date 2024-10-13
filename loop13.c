/*program to check wheather a number is palindrome number or not*/
#include<stdio.h>
int main()
{
    int num,d,a,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=num;
    while(num > 0)
    {
        d = num % 10;
        num = num / 10;
        rev = rev *10 + d;
    }
    printf("\nReverse of %d is %d",a,rev);
    if(rev == a)
    printf("\nIt is a palindrome number");
    else 
    printf("\nIt is not a palindrome number");
    return 0;
}