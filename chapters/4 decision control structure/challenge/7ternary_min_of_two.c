#include<stdio.h>

int main(){
  int num1, num2;

  printf("Enter first numbe: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  num1 < num2 ? printf("first is minimum") : printf("second number is minimum");

  // second method 
  int min = num1 < num2 ? num1 : num2 ;
  printf("Minimun of the two is: %d",min);

  return 0;
}    