/*program to pass array to a function*/
#include<stdio.h>
void increase(int a[])
{
    int i;
    for(i=0; i < 5;i++)
    {
        a[i] = a[i] + 5;
    }
}
int main()
{
    int n[5] = {12,23,48,50,72},i;
    for(i=0; i < 5;i++)
    {
        printf("\n%d",n[i]);
    }
    increase(n);
    /*array is always passed by reference because the array name contains the base address*/
    for(i=0; i < 5;i++)
    {
        printf("\n%d",n[i]);
    }
    return 0;
}