/*program to print HCF of two numbers*/
#include<stdio.h>
int main()
{
    int rem,a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    while(a % b != 0)
    {
        rem = a % b;
        a=b;
        b=rem;
    }
    printf("\nHCF is %d",b);
    return 0;
}