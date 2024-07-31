/*program to check wheather the number is even or odd*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 2 == 0)
    printf("\nNumber is even");
    else
    printf("\nNumber is odd");
    return 0;
}