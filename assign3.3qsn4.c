#include<stdio.h>
int main()
{
    int customer_ID;
    char name;
    float total_bill,units,charge_per_unit;

    //customer details
    printf("enter the customer id: ");
    scanf("%d",&customer_ID);

    printf("enter the customer name: ");
    scanf(" %c",&name);

    printf("enter the unit consumed: ");
    scanf("%f",&units);

    //charge per unit consumed

    if(units<=199){
       charge_per_unit=1.20;
        }

       else if(units>=200 && units<400){
        charge_per_unit=1.50;}

       else if(units>=400 && units<600){
        charge_per_unit=1.80;
        }
         else{
      charge_per_unit=2.00;
         }


      //calculating total bill

      total_bill=units*charge_per_unit;

     //displays result
     printf(" customer_ID %d\n : ",customer_ID);
     printf(" name  %c\n : ",name);
     printf(" total_bill %f\n : ",total_bill);
     printf(" units %f\n  : ",units);
     printf(" charge_per_unit %f\n  : ",charge_per_unit);

     return 0;
}
