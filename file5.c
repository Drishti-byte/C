/*program to print lines of text in a file*/
#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    char text[100];
    fp = fopen("story.txt","w");
    printf("Enter 5 lines:");
    for(i=1; i <= 5;i++)
    {
        printf("\nEnter line %d:",i);
        gets(text);
        fprintf(fp,"\n%s",text);
    }
    fclose(fp);
    return 0;
}