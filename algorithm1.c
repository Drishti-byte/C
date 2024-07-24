/* program to print profit earned */
#include <stdio.h>
int main()
{
    int cp,sp,p,pp;
    printf("Enter CP:");
    scanf("%d",&cp);
    printf("Enter SP:");
    scanf("%d",&sp);
    p=sp-cp;
    printf("Profit= %d",p);
    pp= p*100/cp;
    printf("Profit percenatge= %d",pp);
    return 0;

}