/*program to use the functions of ctype.h file*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch = getchar();
    printf("\nEntered character is %c",ch);
    printf("\nUpper Case %c",toupper(ch));
    printf("\nLower Case %c",tolower(ch));
    printf("\n%c",isupper(ch));
    printf("\n%c",islower(ch));
    char str[10] = "12345";
    int s = 0;
    s = atoi(str);
    printf("\n%d",s);
    return 0;
}