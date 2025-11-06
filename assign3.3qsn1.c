#include<stdio.h>
int main(){
  char ch;
  //input a character
  printf("enter a single character :");
  scanf("%c",&ch);
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
    printf("it is an alphabet");
  }
  else if(ch>='0'&& ch<='9'){
    printf("it is a digit");
    }
    else{
        printf("it is a special character");
    }
    return 0;
}
