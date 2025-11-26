#include<stdio.h>
int main()
{
    char a;
   char*p;
   p=&a;

    printf(" before increment: ");
    scanf("%c",&a);

    *p=*p+1;
    printf(" after increment: %c",*p);
    return 0;
}


