/*program to print hcf using recursion*/
#include<stdio.h>
int hcf(int a,int b)
{
    if(a % b == 0)
    return b;
    int h;
    h = hcf(b, a % b);
    return h;
}
int main()
{
    int n1,n2,res;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    res = hcf(n1,n2);
    printf("\nHCF of %d and %d is %d",n1,n2,res);
    return 0;
}