/*program to find a number using linear search*/
#include<stdio.h>
int main()
{
    int a[5]= {10,15,20,25,30},num,i,found=0;
    printf("Enter a number that you want to search:");
    scanf("%d",&num);
    for(i=0;i < 10;i++)
    {
        if(a[i] == num)
        {
            printf("\nFound at position %d",i);
            found++;
        }
    }
    if(found == 0)
    {
        printf("\nNumber not found");
    }
    return 0;
}