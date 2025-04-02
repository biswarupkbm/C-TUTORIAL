#include<stdio.h>

float max(float, float);

int main(){
  float a, b;
  printf("enter first value: ");
  scanf("%f", &a);
  printf("enter second value: ");
  scanf("%f", &b);
  printf("greater of %.2f and %.2f is: %.2f", a, b, max(a, b));


  return 0;
}

float max(float first, float second){
  return first > second ? first : second ;

}