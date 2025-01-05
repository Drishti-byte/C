/*program to sort numbers in even and odd files*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fq;
    int i,n;
    fp = fopen("even.txt","w");
    fq = fopen("odd.txt","w");
    for(i=1; i <= 20;i++)
    {
        printf("\nEnter number %d:",i);
        scanf("\n%d",&n);
        if(n % 2 == 0)
        {
            printf("\nEven");
            fprintf(fp,"\n%d",n);
        }
        else 
        {
            printf("\nOdd");
            fprintf(fq,"\n%d",n);
        }
    }
    fclose(fp);
    fclose(fq);
    return 0;
}