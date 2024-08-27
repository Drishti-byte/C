/*program to print bill amount*/
#include <stdio.h>
int main()
{
    int bill,dis;
    printf("Enter the bill amount:");
    scanf("%d",&bill);
    dis=(bill > 2000)?bill*10/100:bill*25/100;
    printf("\nDiscount received=%d",dis);
    printf("\nTotal amount to pay=%d",bill-dis);
    return 0;
}