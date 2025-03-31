#include<stdio.h>

int main(){
  float first, second;

  printf("Enter a first number: ");
  scanf("%f",&first);
  printf("Enter a second number: ");
  scanf("%f",&second);
  
  float result = first * second;

  printf("\nproduct is: %f ",result);
  printf("\nproduct is: %.2f ",result);
  
  return 0;
}