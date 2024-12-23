/*program to learn more functions of a file*/
#include<stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    int n=0;
    ptr = fopen("test.txt","r");
    printf("\nInitially the file pointer is at %d",ftell(ptr));
    if(ptr == NULL)
    printf("\nFile doesn't exist");
    else
    {
        printf("\nThe contents of this file are:\n");
        while(1)
        {
            ch = fgetc(ptr);
            if(ch == EOF)
            break;
            if(ch >= 65 && ch >= 90)
            n++;
            printf("%c",ch);
        }
        while(!feof(ptr))
        {
            ch = fgetc(ptr);
            if(ch == 'a'|| ch == 'e'||ch == 'i'|| ch == 'o'||ch == 'u')
            {
                n++;
                printf("%c",ch);
            }
        }
        printf("\nNumber of vowels is %d",n);
        printf("\nFinally the file pointer is at %d",ftell(ptr));
        rewind(ptr);
        fseek(ptr,4,0);
        fseek(ptr,-5,2);
        ch = fgetc(ptr);
        printf("\nCharacter read is %c",ch);
    }
    fclose(ptr); 
}