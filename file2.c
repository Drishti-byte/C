/*program to read from a file*/
#include<stdio.h>
void main()
{
    int n=0;
    FILE *fp;
    fp = fopen("test.txt","r");
    if(fp == NULL)
    printf("\nFile doesn't exist");
    else 
    {
        char ch;
        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)
            break;
            if(ch >= 65 && ch <= 90)
            n++;
            if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
            n++;
            printf("%c",ch);
        }
        printf("\nNumber of vowels are: %d",n);
    }
    fclose(fp);
}