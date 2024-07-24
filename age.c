/*program to check wheather senior citizen or not*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age >= 60)
    printf("\nYou are a senior citizen");
    else
    printf("\nYou are not a senior citizen");
    return 0;
}