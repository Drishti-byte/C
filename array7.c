/*program to perform addition and subtraction on the matrix*/
#include<stdio.h>
int main()
{
    int i,j,r1,r2,c1,c2,a[20][20],b[20][20],c[20][20];
    printf("How many rows and columns are there in 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("\nHow many rows and columns are there in 2nd matrix:");
    scanf("\n%d %d",&r2,&c2);
    if(r1 == r2 && c1 == c2)
    {
        printf("\nEnter the numbers of 1st matrix:");
        for(i=0; i < r1; i++)
        {
            for(j=0; j < c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter numbers of 2nd matrix:");
        for(i=0; i < r2; i++)
        {
            for(j=0; j < c2; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n1st matrix is:");
        for(i=0; i < r1; i++)
        {
            printf("\n");
            for(j=0; j < c1;j++)
            {
                printf("\t%d",a[i][j]);
            }
        }
        printf("\n");
        printf("\n2nd matrix is:");
        for(i=0; i < r1; i++)
        {
            printf("\n");
            for(j=0; j < c1;j++)
            {
                printf("\t%d",b[i][j]);
            }
        }
        printf("\n");
        printf("\nSum of matrices is:");
        for(i=0; i < r1; i++)
        {
            printf("\n");
            for(j=0; j < c1;j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("\t%d",c[i][j]);
            }
        }
        printf("\n");
        printf("\nDifferences of matrices is:");
        for(i=0; i < r1; i++)
        {
            printf("\n");
            for(j=0; j < c1;j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                printf("\t%d",c[i][j]);
            }
        }
        printf("\n");
    }
    else 
    printf("\nOperation not possible");
    return 0;
}