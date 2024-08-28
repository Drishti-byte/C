/*program to print area and perimeter of circle*/
#include <stdio.h>
int main()
{
    float perimeter,area;
    int r;
    printf("Enter radius of the circle:");
    scanf("\n%d",&r);
    perimeter= 2*3.14*r;
    printf("\nPerimeter of circle: %f",perimeter);
    area= 3.14*r*r;
    printf("\nArea of circle:%f",area);
    return 0;
}