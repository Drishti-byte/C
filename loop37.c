/*program to find greatest number using loops*/
#include<stdio.h>
int main()
{
    int i,num,max=0;
    for(i=1; i <= 10; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        if(num > max)
        {
            max = num;
        }
    }
    printf("\nGreatest number is %d",max);
    return 0;
}