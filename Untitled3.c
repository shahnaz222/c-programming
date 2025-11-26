#include<stdio.h>
int main(){
  int a;
   a=7;
  int *p;
  p=&a;
  printf("before update %d\n",a);

  (*p)++;
  printf("after update %d",a);
  return 0;

}
