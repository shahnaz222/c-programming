#include<stdio.h>
int main()
{
    float angle1,angle2,angle3,sum_of_all_angles;
    printf("enter the value of 1st angle :");
    scanf("%f",&angle1);
    printf("enter the value of 2nd angle :");
    scanf("%f",&angle2);
    printf("enter the value of 3rd angle :");
    scanf("%f",&angle3);
    sum_of_all_angles=angle1+angle2+angle3;
    if(sum_of_all_angles<=180 && sum_of_all_angles>0)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
    return 0;
}







