/*how to copy one file to another file*/
#include<stdio.h>
int main()
{
    FILE *fp,*fq;
    fp = fopen("test.txt","r");
    if(fp == NULL)
    {
        printf("\nCannot locate the file");
    }
    else
    {
        fq = fopen("testcopy.txt","w");
        char ch;
        do
        {
            ch = fgetc(fp);
            if(ch == EOF)
            break;
            fprintf(fq,"%c",ch);
        }while(1);
    }
    fclose(fp);
    fclose(fq);
    return 0;
}