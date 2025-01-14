/*program to print simple interest using functions*/
#include<stdio.h>
int si(int p,int r,int t)
{
    int si;
    si = (p*r*t)/100;
    return si;
}
int main()
{
    int a,b,c,res;
    printf("Enter principal,rate and time:");
    scanf("%d %d %d",&a,&b,&c);
    res = si(a,b,c);
    printf("\nSimple Interest is %d",res);
    return 0;
}