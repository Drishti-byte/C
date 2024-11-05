/*program to print triangle of digits*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Drishti Bansal 1-B");
    printf("\nHow many rows do you want: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        for(j=1; j <= i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}