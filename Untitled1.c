#include<stdio.h>
int main(){
  int a;
  int*p;
  p=&a;
  printf("enter the number :");
  scanf("%d",&a);
  printf("%p",&a);
  return 0;
}
