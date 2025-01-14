/*program to make a calculator using switch and functions*/
#include<stdio.h>
#include<math.h>
int add(int a,int b)
{
    int c;
    c = a + b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c = a - b;
    return c;
}
int multiply(int a,int b)
{
    int c;
    c = a * b;
    return c;
}
int divide(int a,int b)
{
    int c;
    c = a / b;
    return c;
}
int main()
{
    int num1, num2, res,ch;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("\nEnter your choice: 1-Add 2-Subtract 3-Multiply 4-Divide 5-Power");
    scanf("\n%d",&ch);
    switch(ch)
    {
        case 1:
        res = add(num1,num2);
        printf("\nSum is %d",res);
        break;
        case 2:
        res = sub(num1,num2);
        printf("\nDifference is %d",res);
        break;
        case 3:
        res = multiply(num1,num2);
        printf("\nProduct is %d",res);
        break;
        case 4:
        res = divide(num1,num2);
        printf("\nQuotient is %d",res);
        break;
        case 5:
        res = pow(num1,num2);
        printf("\nPower is %d",res);
        break;
        default:
        printf("\nInvalid Option");
    }
    return 0;
}