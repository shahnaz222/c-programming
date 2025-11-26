#include<stdio.h>
int main()
{
    char a;
    a='b';
    int *p=&a;

    printf(" before increment: %p \n" ,&a);
    (*p)++;
    printf(" after increment: %p",&a);
    return 0;
}


