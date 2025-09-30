#include<stdio.h>
float main()
{
    float area;
    float radius;
    float perimeter;
    float pi=3.14;

    printf("Enter the value of radius");
    scanf("%f",&radius);

    perimeter=2*pi*radius;
    area=pi*radius*radius;

    printf("%f",perimeter);
    printf("%f",area);
return 0;
}
