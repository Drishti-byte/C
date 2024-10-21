/*program to check wheather the number is prime or not*/
#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factors of %d are: ",num);
    for(i = 1; i <= num;i++)
    {
        if(num % i == 0)
        {
            printf("\n%d",i);
            count++;
        }
    }
    printf("\nNo. of factors are: %d",count);
    if(count == 2)
    printf("\nNumber is prime");
    else 
    printf("\nNumber is not prime");
    return 0;
}