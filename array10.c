/*program to multiply two matrices*/
#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,a[20][20],b[20][20],c[20][20],i,j,k;
    printf("How many rows and columns are there in 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("\nHow many rows and columns are there in 2nd matrix:");
    scanf("%d %d",&r2,&c2);
    if(c1 == r2)
    {
        printf("\nEnter the elements of 1st matrix:");
        for(i=0; i < r1; i++)
        {
            for(j=0; j < c1; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter the elements of 2nd matrix:");
        for(i=0; i < r2; i++)
        {
            for(j=0; j < c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n1st matrix is:");
        for(i=0; i < r1;i++)
        {
            printf("\n");
            for(j=0; j < c1; j++)
            {
                printf("\t%d",a[i][j]);
            }
        }
        printf("\n");
        printf("\n2nd matrix is:");
        for(i=0; i < r2;i++)
        {
            printf("\n");
            for(j=0; j < c2; j++)
            {
                printf("\t%d",b[i][j]);
            }
        }
        printf("\n");
        printf("\nProduct is:");
        for(i=0; i < r1; i++)
        {
            printf("\n");
            for(j=0; j < c2; j++)
            {
                c[i][j] = 0;
                for(k=0; k < r2;k++)
                c[i][j] = a[i][k] * b[k][j];
                printf("\t%d",c[i][j]);
            }
        }
        printf("\n");
    }
    else
    printf("\nMultiplication of matrices is not possible");
    return 0;
}