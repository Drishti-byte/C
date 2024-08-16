/*program to check if the number is even or odd*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    (num % 2 == 0)?printf("\nNumber is even"):printf("\nNumber is odd");
    return 0;
}