/* program to print simple interest */
#include <stdio.h>
int main()
{
    int p,r,t,si,a;
    printf("Enter Principal:");
    scanf("%d",&p);
    printf("Enter Rate:");
    scanf("%d",&r);
    printf("Enter Time:");
    scanf("%d",&t);
    si= p*r*t/100;
    printf("%d",si);
    a= si+p;
    printf("%d",a);
    return 0;

}