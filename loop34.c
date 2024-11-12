/*program to print positive numbers,negative numbers and zeroes*/
#include<stdio.h>
int main()
{
    int num,i,positive=0,negative=0,zero=0;
    for(i=1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num > 0)
        {
            positive++;
        }
        else if(num < 0)
        {
            negative++;
        }
        else
        zero++;
    }
    printf("\nPositive numbers are: %d",positive);
    printf("\nNegative numbers are: %d",negative);
    printf("\nZeroes are: %d",zero);
    return 0;
}