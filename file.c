/*program to print table of a number in a file*/
#include<stdio.h>
void main()
{
    int n,P,i;
    FILE *fp;
    fp = fopen("tables.txt","w");
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i <= 10;i++)
    {
        P = n * i;
        fprintf(fp,"\n%d X %d = %d",n,i,P);
    }
    fclose(fp);
}