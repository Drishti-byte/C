/*program to write into a file*/
#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("test.txt","w");
    fprintf(fp,"Hello!!! \nWelcome to my file.... I am doing file handling.");
    fclose(fp);
}