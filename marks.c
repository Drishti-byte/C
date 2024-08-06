/*program to print total and percentage marks*/
#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    float total,per;
    printf("\nEnter marks in 1st subject:");
    scanf("%d",&n1);
     printf("\nEnter marks in 2nd subject:");
    scanf("%d",&n2);
     printf("\nEnter marks in 3rd subject:");
    scanf("%d",&n3);
     printf("\nEnter marks in 4th subject:");
    scanf("%d",&n4);
     printf("\nEnter marks in 5th subject:");
    scanf("%d",&n5);
    total=n1+n2+n3+n4+n5;
    printf("\nTotal is %f",total);
    per=total/5;
    printf("\nPercentage is %f",per);
    return 0;
}