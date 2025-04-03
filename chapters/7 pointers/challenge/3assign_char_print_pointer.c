#include<stdio.h>

int main(){
  char character;
  char *ptr = &character;

  printf("enter the value: ");
  scanf(" %c", ptr);

  printf("printing value of \'character\' using pointer: %c\n", *ptr);
  printf("printing value of char: %c", character);
  
  return 0;
}