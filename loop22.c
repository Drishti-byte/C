/*program to multiply two numbers without using * sign*/
#include<stdio.h>
int main()
{
    int a,b,i,result = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(i = 1; i <= b; i++)
    {
        result = result + a;
    }
    printf("\nProduct of %d and %d is %d",a,b,result);
    return 0;
}