#include<stdio.h>

int main(){
  int number;

  printf("enter your number: ");
  scanf("%d", &number);

  number % 2 == 0 ? printf("Number is even"): printf("Number is odd"); 

  return 0;
}  