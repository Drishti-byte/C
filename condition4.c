/* program to check wheather there is profit or loss*/
#include <stdio.h>
int main()
{
    int cp,sp;
    printf("Enter CP:");
    scanf("%d",&cp);
    printf("\nEnter SP:");
    scanf("%d",&sp);
    (cp < sp)?printf("\nThere is a profit"):printf("\nThere is a loss");
    return 0;
}