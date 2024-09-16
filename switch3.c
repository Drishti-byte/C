/*program to print the number of days in a month*/
#include <stdio.h>
int main()
{
    int day;
    printf("Enter a month number:");
    scanf("\n%d",&day);
    switch(day)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("\n31 days\n");
        break;
        case 2:
        printf("\n28 days\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("\n30 days\n");
        break;
        default:
        printf("\nInvalid day\n");
    }
    return 0;
}