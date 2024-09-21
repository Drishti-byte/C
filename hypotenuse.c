/*program to calculate hypotenuse of a right angled triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
    float b,a,h;
    printf("Enter base and height of right triangle: ");
    scanf("%f %f",&b,&a);
    h = sqrt(b*b + a*a);
    printf("\nHypotenuse of a right angled triangle is %.2f",h);
    return 0;
}