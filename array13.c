/*program to find a number using binary search*/
#include<stdio.h>
int main()
{
    int num,a[10] = {7,10,14,23,34,49,57,69,78,82},beg=0,end=9,mid;
    printf("Enter the number that you want to search:");
    scanf("%d",&num);
    while(beg <= end)
    {
        mid = (beg+end)/2;
        if(a[mid] == num)
        {
            printf("\nFound at position %d",mid);
            break;
        }
        else if(num > a[mid])
        {
            beg = mid + 1;
        }
        else if(num < a[mid])
        {
            end = mid - 1;
        }
    }
    if(beg > end)
    {
        printf("\nNumber not found");
    }
    return 0;
}