#include<stdio.h>
int main()
{
    float side1,side2,side3;
    //input sides of triangle
    printf("enter three sides of a triangle");
    scanf("%f%f%f",&side1,&side2,&side3);
    //check for valid triangle
    if(side1==side2 && side2==side3 && side3==side1)
    {
        printf("the triangle is equilateral");
    }
    else if(side1==side2 || side2==side3 || side3==side1)
    {
        printf("the triangle is isosceles");
    }
    else
    {
        printf("the triangle is scalene");

    }

    return 0;
}











































