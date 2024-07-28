/* program to print area and perimeter of rectangle*/
#include <stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter Length:");
    scanf("%f",&l);
    printf("Enter Breadth:");
    scanf("%f",&b);
    a= l*b;
    printf("\nArea= %f",a);
    p= 2*(l+b);
    printf("\nPerimeter=%f",p);
    return 0;

}