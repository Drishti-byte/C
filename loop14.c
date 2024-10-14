/*program to print armstrong number*/
#include<stdio.h>
int main()
{
    int num,sum=0,a,d;
    printf("Enter a number: ");
    scanf("%d",&num);
    a = num;
    while(num > 0)
    {
        d = num % 10;
        num = num / 10;
        sum = sum + d * d * d;
    }
    if(sum == a)
    printf("\n%d is an armstrong number",a);
    else 
    printf("\n%d is not an armstrong number",a);
    return 0;
}