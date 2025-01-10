/*program to print multiplication table using functions*/
#include<stdio.h>
void table(int num);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    table(a);
    return 0;
}
void table(int num)
{
    int i,p=1;
    for(i=1; i <= 10;i++)
    {
        p = num * i;
        printf("\n%d X %d= %d",num,i,p);
    }
}