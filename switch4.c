/*program to print whether a number is even or odd*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("\n%d",&num);
    switch(num % 2)
    {
        case 1:
        printf("\nNumber is odd\n");
        break;
        case 0:
        printf("\nNumber is even\n");
        break;
        default:
        printf("\nIt is a invalid number\n");
    }
       return 0;
}