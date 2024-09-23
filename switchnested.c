/*program to print nested switch*/
#include<stdio.h>
int main()
{
    float l,b,per,area,cir,r;
    int c1,c2;
    printf("Press 1-Rectangle");  
    printf("\nPress 2-Circle");
    scanf("%d",&c1);
    switch(c1)
    {
        case 1:
        printf("\nPress 1-Area");
        printf("\nPress 2-Perimeter");
        scanf("%d",&c2);
        printf("\nEnter length and breadth of rectangle: ");
        scanf("%f %f",&l,&b);
        switch(c2)
        {
            case 1:
            area = l*b;
            printf("\nArea of rectangle: %f",area);
            break;
            case 2: 
            per = 2*(l+b);
            printf("\nPerimeter of rectangle: %f",per);
            break;
        }
        break;
        case 2:
        printf("\nPress 1-Area");
        printf("\nPress 2-Circumference");
        scanf("%d",&c2);
        printf("\nEnter radius of circle:");
        scanf("%f",&r);
        switch(c2)
        {
            case 1:
            area = 3.14 * r*r;
            printf("\nArea of circle: %f",area);
            break;
            case 2:
            cir= 2*3.14*r;
            printf("\nCircumference of circle: %f",cir);
            break;
        }
        break;
    }
    return 0;
}