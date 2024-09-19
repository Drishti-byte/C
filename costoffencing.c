/*program to calculate the cost of fencing of a rectangular field*/
#include<stdio.h>
int main()
{
    int l,b,peri,amount,cost;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d",&l,&b);
    peri= 2*(l+b);
    printf("\nPerimeter is %d",peri);
    printf("\nEnter the cost of fencing: ");
    scanf("%d",&cost);
    amount= peri*cost;
    printf("Cost is %d",amount);
    return 0;
}