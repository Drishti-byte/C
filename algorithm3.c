/* program to print amount*/
#include <stdio.h>
int main()
{
    int c,q,a,d;
    printf("Enter Cost:");
    scanf("%d",&c);
    printf("Enter Quantity:");
    scanf("%d",&q);
    a= c*q;
    printf("%d",a);
    d= a*10/100;
    printf("Discount= %d",d);
    c= a-d;
    printf("%d",c);
    return 0;
    
}