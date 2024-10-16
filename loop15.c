/*program to print values divisible by 5*/
#include<stdio.h>
int main()
{
    int i,num,count=0;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num % 5 == 0)
        {
            count++;
        }
    }
    printf("\nNo. of values divisible by 5 are %d",count);
    return 0;
}