/*program to print greatest of three numbers using functions*/
#include<stdio.h>
int greatest(int,int,int);
int main()
{
    int a,b,c,res;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    res = greatest(a,b,c);
    printf("\nGreatest number is %d",res);
    return 0;
}

int greatest(int x,int y,int z)
{
    if(x > y && x > z)
    return x;
    if(y > x && y > z)
    return y;
    if(z > x && z > y)
    return z;
}