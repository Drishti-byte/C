/*program to generate a shopping bill*/
#include<stdio.h>
int main()
{
    int item[20],cost[20],qty[20],amt[20],i,total=0,n;
    printf("How many items are there:");
    scanf("%d",&n);
    for(i=0;i < n;i++)
    {
        printf("\nItem No. %d",item[i]);
        printf("\nEnter product cost:");
        scanf("%d",&cost[i]);
        printf("\nEnter product quantity:");
        scanf("%d",&qty[i]);
        amt[i] = cost[i] * qty[i];
    }
    printf("\nShopping Bill");
    printf("\n----------------------------------------------");
    printf("\nItem No. \tCost \tQuantity \tAmount");
    printf("\n----------------------------------------------");
    for(i=0;i < n;i++)
    {
        printf("\n%d \t%4d \t%5d \t%10d",item[i],cost[i],qty[i],amt[i]);
        total += amt[i];
    }
    printf("\n----------------------------------------------");
    printf("\nTotal amount to be paid is: %d",total);
    return 0;
}