/*program to print even and odd numbers*/
#include<stdio.h>
int main()
{
    int num,i,even=0,odd=0;
    for(i=1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nEven numbers are: %d",even);
    printf("\nOdd numbers are: %d",odd);
    return 0;
}