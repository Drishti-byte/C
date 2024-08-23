/*program to check wheather it is a square or rectangle*/
#include <stdio.h>
int main()
{
    int l,b;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    (l == b)?printf("\n It is a square"):printf("\nIt is a rectangle");
    return 0;
}