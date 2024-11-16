/*program to find lowest number using loop*/
#include<stdio.h>
int main()
{
    int i,num,low=0;
    for(i=1; i <= 10; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        if(num < low)
        {
            low = num;
        }
    }
    printf("\nLowest number is %d",low);
    return 0;
}