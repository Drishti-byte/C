/*program to print the time in 12 hour format*/
#include<stdio.h>
int main()
{
    int hours,minutes,seconds;
    printf("Enter time in hours, minutes and seconds:");
    scanf("\n%d  %d  %d",&hours,&minutes,&seconds);
    if(hours > 12)
    {
        printf("%d  %d  %d",hours-12,minutes,seconds);
    }
    else
    {
        printf("%d  %d  %d am",hours,minutes,seconds);
    }
    return 0;
}