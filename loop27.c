/*program to print sequence of numbers*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        for(j=i; j <= n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}