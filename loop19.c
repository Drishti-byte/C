/*program to check wheather a number is a perfect number or not*/
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\nFactors of %d are: ",num);
    for(i=1;i < num; i++)
    {
        if(num % i == 0)
        {
            printf("\n%d",i);
            sum = sum + i;
        }
    }
    if(sum == num)
    printf("\nIt is a perfect number");
    else 
    printf("\nIt is not a perfect number");
    return 0;
}