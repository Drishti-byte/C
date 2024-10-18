/*program to print multiplication table by addition*/
#include<stdio.h>
int main()
{
    int num,a,result=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(a=1;a<=10;a++)
    {
        result = result + num;
        printf("\n%d",result);
    }
    return 0;
}