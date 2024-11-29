/*program to print sum of diagonal elements*/
#include<stdio.h>
int main()
{
    int a[20][20],i,j,r,c,sum=0;
    printf("How many rows and columns are there in a square matrix(r=c):");
    scanf("%d %d",&r,&c);
    if(r == c)
    {
        printf("\nEnter the numbers:");
        for(i=0; i < r;i++)
        {
            for(j=0; j < c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nMatrix is:");
        for(i=0; i < r;i++)
        {
            printf("\n");
            for(j=0; j < c;j++)
            {
                printf("\t%d",a[i][j]);
                if(i == j || i + j == r-1)
                {
                    sum = sum + a[i][j];
                }
            }
        }
        printf("\n");
        printf("\nSum of diagonal elements: %d",sum);
    }
    else 
    printf("\nSum of diagonal is not possible");
    return 0;
}