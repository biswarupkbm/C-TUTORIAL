#include<stdio.h>

int main(){
  int number;

  printf("enter your number: ");
  scanf("%d", &number);

  printf("%d is the absolute value",(number > 0 ? number : -number));

  return 0;
}  