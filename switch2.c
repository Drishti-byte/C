/*program to print operation on two numbers*/
#include <stdio.h>
int main()
{
    int n1,n2,choice,add,multiply,subtract,divide;
    printf("Enter two numbers:");
    scanf("\n%d %d",&n1,&n2);
    printf("\nPress 1-ADD\n");
    printf("\nPress 2-SUBTRACT\n");
    printf("\nPress 3-MULTIPLY\n");
    printf("\nPress 4-DIVIDE\n");
    printf("\nEnter choice:");
    scanf("\n%d",&choice);
    switch(choice)
    {
        case 1:
        add= n1+ n2;
        printf("\nSum is %d",add);
        break;
        case 2:
        subtract= n1- n2;
        printf("\nDifference is %d",subtract);
        break;
        case 3:
        multiply= n1 * n2;
        printf("\nProduct is %d",multiply);
        break;
        case 4:
        divide= n1 / n2;
        printf("\nQuotient is %d",divide);
        break;
        default:
        printf("\nInvalid option\n");
    }
    return 0;
}