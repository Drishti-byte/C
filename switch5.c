/*program to check whether the alphabet is vowel or consonant*/
#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter alphabet:");
    scanf("\n%c",&alphabet);
    switch(alphabet)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        printf("\nIt is a vowel\n");
        break;
        default:
        printf("\nIt is a consonant\n");
    }
    return 0;
}