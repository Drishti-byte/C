/*program to check whether the matrix is identity matrix or not*/
#include<stdio.h>
int main()
{
    int r,c,i,j,a[20][20],idn = 1;
    printf("How many rows and columns are there:");
    scanf("%d %d",&r,&c);
    if(r == c)
    {
        printf("\nEnter the numbers:");
        for(i =0; i < r;i++)
        {
            for(j=0; j < c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    printf("\nMatrix is:");
    for(i = 0; i < r;i++)
    {
        printf("\n");
        for(j = 0;j < c;j++)
        {
            printf("\t%d",a[i][j]);
            if(i == j && a[i][j] != 1)
             {
                idn == 0;
                break;
             }
            if(i != j && a[i][j] != 0)
            {
                idn == 0;
                break;
            }
        }
        if(idn == 0)
        break;
    }
    printf("\n");
    if(idn == 1)
    printf("\nIt is an identity matrix");
    else 
    printf("\nIt is not an identity matrix");
    return 0;
}