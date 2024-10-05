/*program to input 5 numbers from the user and print their sum*/
#include<stdio.h>
int main()
{
    int n,sum=0,num;
    for(n = 1; n <= 5; n++)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        sum += num;
    }
    printf("\nSum is %d",sum);
    return 0;
}