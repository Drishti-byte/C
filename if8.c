/*program to check whether student will get admission in college or not*/
#include <stdio.h>
int main()
{
    int per,rank;
    printf("Enter Percentage marks of 12th and rank in CET:");
    scanf("%d %d",&per,&rank);
    if(per > 60 && rank <= 500)
    {
        printf("\nYou will get admission in your desired college\n");
    }
    else
    {
        printf("\nYou will not get admission\n");
    }
    return 0;
}