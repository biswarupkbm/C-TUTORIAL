#include<stdio.h>
#include<math.h>

int main(){
  float principle, rate, time;

  printf("Welcome to compound calculator.\n");

  printf("Enter the principle: ");
  scanf("%f",&principle);
  printf("Enter the rate : ");
  scanf("%f",&rate);
  printf("Enter the time : ");
  scanf("%f",&time);
  
  float interest = principle * pow((1 + rate /100), time);

  printf("\n compound interest is: %.2f ",interest);
  
  return 0;
}