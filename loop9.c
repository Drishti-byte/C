/*program to print factors and to check wheather a number is perfect number or not */
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\nFactors of %d are: ",num);
    for(i=1; i < num; i++)
    {
        if(num % i == 0)
        {
            printf("\n%d",i);
            sum= sum+i;
        }
    }
    if(sum == num)
    printf("\n%d is a perfect number",num);
    else 
    printf("\n%d is not a perfect number",num);
    return 0;
}