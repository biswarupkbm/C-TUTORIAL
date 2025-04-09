#include<stdio.h>

int main(){

  printf("printing user inputs\n");
  char name[25];
  printf("enter your name: ");
  fgets(name, sizeof(name), stdin);

  printf("\nthe name you entered is: ");
  puts(name);

  return 0;
}