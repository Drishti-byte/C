/*program to print vowels and consonants*/
#include<stdio.h>
int main()
{
    char a;
    int vowel=0,consonant=0,i;
    for(i=1; i <= 10; i++)
    {
        printf("Enter an alphabet: ");
        fflush(stdin);
        scanf("%c",&a);
        if(a >= 65 && a <= 90)
        a += 32;
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            {
                vowel++;
            }
        else 
            {
                consonant++;
            }
    }
    printf("\nVowels are: %d",vowel);
    printf("\nConsonants are: %d",consonant);
    return 0;
}