/*program to insert an element to an array*/
#include<stdio.h>
int main()
{
    int num,pos,i,n=5;
    int a[10] = {10,24,34,49,56};
    printf("Array elements are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEnter the number and position to be inserted in an array:");
    scanf("%d %d",&num,&pos);
    i = n;
    while(i >= pos)
    {
        a[i] = a[i + 1];
        i--;
    }
    a[pos - 1] = num;
    n++;
    printf("\nArray elements after sorting are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}