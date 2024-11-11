/*program to print area of rectangle till the user wants */
#include<stdio.h>
int main()
{
    int l,b,area;
    char ans;
    do
    {
        printf("Enter length and breadth of rectangle: ");
        scanf("%d %d",&l,&b);
        area = l * b;
        printf("\nArea is %d",area);
        printf("\nDo you want to try again(y/n): ");
        fflush(stdin);
        scanf("%c",&ans);
    } while (ans == 'y' || ans == 'Y');
    return 0;
}