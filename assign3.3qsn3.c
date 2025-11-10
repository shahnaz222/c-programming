#include<stdio.h>
int main()
{
    float cost_price,selling_price,difference;
    printf("enter the cost_price : ");
    scanf("%f",&cost_price);
    printf("enter the selling_price : ");
    scanf("%f",&selling_price);
    difference = selling_price-cost_price;
    if(selling_price>cost_price)
    {
        printf("total profit is : %f",difference);
    }
    if(cost_price<selling_price)
    {
        printf("total loss is : %f",-difference);
    }
    if(selling_price==cost_price)
    {
        printf("there is no profit or loss");
    }
    return 0;
}
