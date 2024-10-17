/*program to print multiplication table*/
#include<stdio.h>
int main()
{
    int num,a,p;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(a=1; a<=10;a++)
    {
        p = num*a;
        printf("\n%d X %d = %d",num,a,p);
    }
    return 0;
}