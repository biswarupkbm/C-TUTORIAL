#include<stdio.h>

int main(){
  const float PI = 3.14;
  int radius;
  
  printf("Enter the radius number: ");
  scanf("%d",&radius);
  
  printf("The area of circle is: %f cm2", PI * radius * radius);
  return 0;
}