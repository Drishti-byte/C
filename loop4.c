/*progarm to print numbers from 1 to 5 along with their squares and cubes*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,cu;
    for( n=1; n <= 5; n++)
    {
        sq=n*n;
        cu=n*n*n;
        printf("\n%d %d %d",n,sq,cu);
    }
    return 0;
}