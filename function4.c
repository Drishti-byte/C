/*program to print hypotenuse of a right angled triangle*/
#include<stdio.h>
#include<math.h>
int hypotenuse(int b,int p)
{
    return sqrt(b*b+p*p);
}
int main()
{
    int s1,s2,h;
    printf("\nEnter base and perpendicular of triangle: ");
    scanf("%d %d",&s1,&s2);
    h= hypotenuse(s1,s2);
    printf("\nHypotenuse is %d",h);
    return 0;
}