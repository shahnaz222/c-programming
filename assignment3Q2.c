#include<stdio.h>

int main(){
    int m;
    int n;

    //prompt the user to input an integer m.
    printf("Enter an integer value for m:");
    scanf("%d",&m);

    if( m > 0 ){
        n = 1;

    }else if ( m==0 ){
        n = 0;

    } else {
        n = -1;
    }
        printf("The value of n is :");
        printf("%d",n);




}
