
#include<stdio.h>
  int main(){
  float basic_salary;
  float gross_salary;
  float dearness_allowance;
  float houserent_allowance;

  printf("Enter Ramesh's Basic Salary");
  scanf("%f",&basic_salary);

  dearness_allowance=0.40;
  houserent_allowance=0.20;

  gross_salary=basic_salary+dearness_allowance+houserent_allowance;

  printf("Gross_salary of Ramesh=%2f\n",gross_salary);
return 0;


  }
