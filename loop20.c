/*program to print lcm of two numbers*/
#include<stdio.h>
int main()
{
    int a,b,lcm,i;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(i=1; i <= a*b; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            printf("\nLCM of %d and %d is %d",a,b,lcm);
            break;
        }
    }
    return 0;
}