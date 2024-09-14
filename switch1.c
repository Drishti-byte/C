/*program to print area and perimeter of rectangle*/
#include <stdio.h>
int main()
{
    float l,b,area,perimeter;
    int choice;
    printf("Enter length and breadth:");
    scanf("%d %d",&l,&b);
    printf("\nPress 1-Area\n");
    printf("\nPress 2-Perimeter\n");
    printf("\nEnter choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
    area= l*b;
    printf("\nArea is %d",area);
    break;
    case 2:
    perimeter= 2*(l+b);
    printf("\nPerimeter is %d",perimeter);
    break;
    default:
    printf("\nInvalid option\n");
}
return 0;
}