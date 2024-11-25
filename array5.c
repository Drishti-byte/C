/*program to print matrix entered by the user*/
#include<stdio.h>
int main()
{
    int a[20][20],r,c,i,j;
    printf("How many rows and columns are there:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the numbers:");
    for(i=0; i < r;i++)
    {
        for(j=0; j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix is:");
    for(i=0; i < r;i++)
    {
        printf("\n");
        for(j=0; j < c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}