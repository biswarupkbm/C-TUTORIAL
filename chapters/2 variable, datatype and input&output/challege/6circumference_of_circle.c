#include<stdio.h>

int main(){
  const float PI = 3.14;
  int radius;
  
  printf("Enter the radius number: ");
  scanf("%d",&radius);
  
  printf("The circumference of circle is: %f cm", 2 * PI * radius);
  return 0;
}