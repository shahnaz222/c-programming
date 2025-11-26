#include<stdio.h>
int main(){
 float a;
 int*p;
 p=&a;


 printf(" size of my data = %zu bytes\n",sizeof(a));


 printf("size of my pointer = %zu bytes\n",sizeof(p));
 return 0;

}
