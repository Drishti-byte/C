/*program to check wheather student is pass or fail*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks >= 50)
    printf("\nYou are pass");
    else
    printf("\nYou have to reappear");
    return 0;
}