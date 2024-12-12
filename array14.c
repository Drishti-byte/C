/*program to print lower and upper triangular matrix*/
#include<stdio.h>
int main()
{
    int a[20][20],r,c,i,j;
    printf("How many rows and columns are there:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the elements of the matrix:");
    for(i=0;i <r;i++)
    {
        printf("\n");
        for(j=0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is:");
    for(i=0;i < r;i++)
    {
        printf("\n");
        for(j=0;j < c;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\nLower triangular matrix:");
    for(i=0;i < r;i++)
    {
        printf("\n");
        for(j=0; j <= i;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\nUpper triangular matrix:");
    for(i=0; i < r;i++)
    {
        printf("\n");
        for(j=0; j < i;j++)
        {
            printf("\t");
        }
        for(j=i; j < c;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    return 0;
}