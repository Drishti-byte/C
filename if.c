/*program to print net amount to be paid*/
#include<stdio.h>
int main()
{
    int cost,quan,amount,dis,pay;
    printf("Enter cost of the product:");
    scanf("%d",&cost);
    printf("\nEnter the quantity:");
    scanf("%d",&quan);
    amount=cost*quan;
    if(amount<3000)
    dis=amount*10/100;
    pay=amount-dis;
    printf("%d",pay);
    if(amount>3000 && amount<5000)
    dis=amount*20/100;
    pay=amount-dis;
    printf("\n%d",pay);
    if(amount>5000 && amount<8000)
    dis=amount*30/100;
    pay=amount-dis;
    printf("\n%d",pay);
    if(amount>8000)
    dis=amount*40/100;
    pay=amount-dis;
    printf("\n%d",pay);
    printf("\nAmount to be paid:%d",pay);
    return 0;
}