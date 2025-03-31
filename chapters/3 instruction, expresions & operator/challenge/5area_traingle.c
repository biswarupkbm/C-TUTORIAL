#include<stdio.h>

int main(){
  int b,h;
  const float base = 0.5;
  // 1/2 = 0.5

  printf("Enter the breath: ");
  scanf("%d",&b);
  printf("Enter the height : ");
  scanf("%d",&h);
  
  float area = base * b * h;

  printf("\n Area of traingle is: %f ",area);
  
  return 0;
}