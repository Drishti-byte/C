/*program to print prime numbers in a range*/
#include<stdio.h>
int main()
{
    int a,b,num,i,count;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(num = a; num <= b;num++)
    {
        count = 0;
        for(i=2; i < num;i++)
        {
            if(num % i == 0)
            {
              count++;
            }
        }
        if(count == 0 && num != 1)
        printf("\n%d",num);
    }
    return 0;
}