#include<stdio.h>
int main()
{
    char grade;
//prompt the input from user
    printf("enter grade E,V,G,A,F : ");
    scanf("%c",&grade);
//use if-else statement

    if(grade=='E' || grade=='e')
    {
        printf("Excellent");
    }
    else if(grade=='V' || grade=='v')
    {
        printf("Very Good");
    }
    else if(grade=='G' || grade=='g')
    {
        printf("Good");
    }

    else if(grade=='A' || grade=='a')
    {
        printf("Average");
    }
    else if(grade=='F' || grade=='f')
    {
        printf("Fail");
    }

    else{
       printf("Invalid grade entered");
    }
    return 0;

}





