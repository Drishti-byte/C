/*program to pass arrays to functions*/
#include<stdio.h>
void input(int p[],int n)
{
    int i;
    for(i=0; i < n;i++)
    {
        printf("\nEnter a number:");
        fflush(stdin);
        scanf("%d",&p[i]);
    }
}
int main()
{
    int a[10],n,i;
    printf("\nHow many numbers are there:");
    scanf("%d",&n);
    input(a,n);
    printf("\nArray is:");
    for(i=0;i < n;i++)
    {
        printf("\t%d",a[i]);
        printf("\n");
    }
    return 0;
}