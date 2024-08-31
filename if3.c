/*program to print profit and loss*/
#include<stdio.h>
int main()
{
    int sp,cp,loss,profit;
    printf("Enter SP:");
    scanf("%d",&sp);
    printf("\nEnter CP:");
    scanf("%d",&cp);
    if(sp>cp)
    {
        printf("\nIt is a profit");
    }
    if(sp<cp)
    {
        printf("\nIt is a loss");
    }
    if(sp==cp)
    {
        printf("\nNo profit no loss");
    }
    return 0;
}