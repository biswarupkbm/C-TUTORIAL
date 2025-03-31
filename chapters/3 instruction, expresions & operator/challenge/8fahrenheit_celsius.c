#include<stdio.h>
#include<math.h>

int main(){
  float f;

  printf("Welcome to temperature calculator.\n");

  printf("Enter the principle: ");
  scanf("%f",&f);
  
  
  float c = (f - 32) * 5/9;

  printf("\n Temp in C is: %.2f ",c);
  
  return 0;
}