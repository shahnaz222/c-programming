#include<stdio.h>
int main()
{
    float temperature;
    printf("enter the temperature in centigrade");
    scanf("%f",&temperature);

    if (temperature<0)
    {
        printf("freezing wheather");
    }

    else if (temperature>=0 && temperature<10)
    {
        printf("very cold wheather");
    }

    else if (temperature>=10 && temperature<20)
    {

        printf("cold wheather");
    }

    else if (temperature>=20 && temperature<30)
    {

        printf("normal in temperature");
    }

    else if (temperature>=30 && temperature<40)
    {

        printf("it's hot");
    }

    else if (temperature>=40)
    {
        printf("it's very hot");
    }
    return 0;
}
