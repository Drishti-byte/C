/*program to print abcd pattern in loops*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("How many rows are there: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("%c",j+96);
        }
        printf("\n");
    }
    return 0;
}