/*program to print with nested loops*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i <= 5;i++)
    {
        for(j=1;j <= 3;j++)
        {
            printf("%d %d\t",i,j);
        }
        printf("\n");
    }
    return 0;
}