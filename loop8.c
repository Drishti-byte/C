/*program to print factorial of a number using loop */
#include<stdio.h>
int main()
{
    int i,num,result=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=num; i>=1; i--)
    result= result*i;
    printf("\nFactorial of %d is %d",num,result);
    return 0;
}