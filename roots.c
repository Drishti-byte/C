/*program to print roots of a quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2;
    printf("Enter the coefficients of quadratic equation: ");
    scanf(" %d %d %d",&a,&b,&c);
    d = b*b - 4*a*c;

    if(d < 0)
    {
        printf("\nNo real roots");
    }
    else if(d == 0)
    {
        printf("\nEqual real roots");
        r1 = -b/2*a;
        r2 = r1;
        printf("\nRoots are %f and %f",r1,r2);
    }
    else if(d > 0)
    {
        printf("\nUnequal real roots");
        r1 = (-b+sqrt(d))/2*a;
        r2 = (-b-sqrt(d))/2*a;
        printf("\nRoots are %f and %f",r1,r2);
    }
    return 0;
}