/*program to perform transpose of a matrix*/
#include<stdio.h>
int main()
{
    int r,c,i,j,a[20][15];
    printf("How many rows and columns are there:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the numbers:");
    for(i=0; i < r; i++)
    {
        for(j=0; j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix is:");
    for(i=0; i < r; i++)
    {
        printf("\n");
        for(j=0; j < c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix:");
    for(i=0; i < c; i++)
    {
        printf("\n");
        for(j=0; j < r;j++)
        {
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}