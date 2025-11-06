#include<stdio.h>
int main(){
  char ch;
  //check alphabet is a vowel or consonant
  printf("enter the alphabet : ");
  scanf("%c",&ch);
  ch = tolower(ch);
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    printf("it is a vowel");
  }
  else{
    printf("it is a consonant ");
  }
  return 0;
}
