/*program to print sequence of numbers using spaces*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1; i <= n;i++)
    {
        for(k=1;k < i;k++)
        {
            printf(" ");
        }
        for(j=i; j <= n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}