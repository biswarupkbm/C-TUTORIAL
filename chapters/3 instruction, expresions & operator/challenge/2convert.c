#include<stdio.h>

int main(){
  int number;

  printf("Enter a number: ");
  scanf("%d",&number);

  printf("\n Original number is: %d",number);

  // implicit convertion
  float floating = number;
  printf("\n float number is: %f",floating);

  // Explicit convertion
  printf("\n float explicite number is: %f", (float)number);
}