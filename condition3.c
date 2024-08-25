/*program to check wheather the person is eligible for voting*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    (age >= 18)?printf("\nYou are eligible to vote"):printf("\nYou are not eligible to vote");
    return 0;
}