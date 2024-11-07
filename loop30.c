/*program to print star pattern*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("How many rows are there: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        for(k=1; k < n-i; k++)
        {
            printf(" ");
        }
        for(j=1; j <= i; j++)
        {
            printf("*");
        }
        for(k=1; k < i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}