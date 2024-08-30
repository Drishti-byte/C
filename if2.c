/*program to print if the triangle is equilateral,isoseles or scalene*/
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter sides of the triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s3==s1)
    printf("\nIt is an equilateral triangle");
    if(s1==s2 && s2==s3 && s3!=s1)
    printf("\n It is isoseles triangle");
    if(s1!=s2 && s2!=s3 && s3!=s1)
    printf("\nIt is a scalene triangle");
    return 0;
}