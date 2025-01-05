/*program to print fibonacci series using recursion*/
#include<stdio.h>
void fibonacci(int a,int b,int c)
{
    if(c == 0)
    return;
    int s;
    s = a + b;
    printf("\n%d",s);
    fibonacci(b,s,c-1);
}
int main()
{
    int num,res;
    printf("How many times you want to print the series:");
    scanf("%d",&num);
    fibonacci(0,1,num);
    return 0;
}