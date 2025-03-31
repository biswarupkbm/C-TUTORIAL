#include<stdio.h>

int main(){
  float principle, rate, time;

  printf("Welcome to simple interest calculator.\n");

  printf("Enter the principle: ");
  scanf("%f",&principle);
  printf("Enter the rate : ");
  scanf("%f",&rate);
  printf("Enter the time : ");
  scanf("%f",&time);
  
  float interest = (principle * rate * time)/100;

  printf("\n simple interest is: %f ",interest);
  
  return 0;
}