#include<stdio.h>
int main()
{
    int roll_number;
    char name[50];
    int marks1;
    int marks2;
    int marks3;
    float total_marks;
    float percentage;
    printf("enter the roll number");
    scanf("%d,&roll_number:");

    printf("enter the name");
    scanf("%s",&name);

    printf("enter the marks1:");
    scanf("%d",&marks1);

    printf("enter the marks2:");
    scanf("%d",&marks2);

    printf("enter the marks3:");
    scanf("%d",&marks3);

    total_marks=marks1+marks2+marks3;
    percentage=(total_marks/300)*100;

    printf("/n total_marks = %f",total_marks);
    printf("/n percentage= %f",percentage);

    if(percentage>=60)
    {
        printf("first division");
    }
    else if (percentage>=45)
    {
        printf("second division");
    }
    else if (percentage>=33)
    {
        printf("third division");
    }
    else
    {
        printf("division fail");
    }
    return 0;
}

