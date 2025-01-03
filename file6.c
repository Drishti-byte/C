/*program to store student's data using structures*/
#include<stdio.h>
struct student
{
    int admno;
    char name[50];
    int marks;
};
int main()
{
    struct student a;
    int c,n,i;
    FILE *fp;
    do
    {
        printf("Press 1-Add a new student");
        printf("\nPress 2-Show all student's data");
        printf("\nPress 3-Search a student");
        printf("\nPress 4-Exit");
        printf("\nEnter your choice:");
        scanf("%d",c);
        if(c == 1)
        {
            fp = fopen("student.dat","wb");
            if(fp == NULL)
            {
                printf("\nFile doesn't exist");
            }
            else
            {
                printf("\nEnter admission number:");
                scanf("%d",&a.admno);
                printf("\nEnter name of the student:");
                fflush(stdin);
                gets(a.name);
                printf("\nEnter marks:");
                scanf("%d",&a.marks);
                fwrite(&a,sizeof(a),1,fp);
                fclose(fp);
                printf("\nStudent Added Successfully");
            }
        }
        else if(c == 2)
        {
            fp = fopen("student.dat","rb");
            if(fp == NULL)
            {
                printf("\nFile doesn't exist");
            }
            else 
            {
                while(fread(&a,sizeof(a),1,fp))
                {
                    printf("\nAdmission No.: %d Name: %s Marks: %d",a.admno,a.name,a.marks);
                }
            }
            fclose(fp);
        }
        else if(c == 3)
        {
            fp = fopen("student.dat","rb");
            if(fp == NULL)
            {
                printf("\nFile doesn't exist");
            }
            else
            {
                printf("\nEnter the admission number that you want to search:");
                scanf("%d",&n);
                for(i=1; i <= n ;i++)
                {
                    if(i == n)
                    {
                        printf("\nFound at position %d",i);
                        printf("\nAdmission number: %d Name: %s Marks: %d",a.admno,a.name,a.marks);
                    }
                }
            }
            fclose(fp);
        }
        if(c == 4)
        break;
    } while (c != 4);
    return 0;
}