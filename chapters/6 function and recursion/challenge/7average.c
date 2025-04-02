#include<stdio.h>

float get_average(int, int, int, int, int);

int main(){
  int a, b, c, d, e;
  printf("Calculating averages\n");
  printf("enter first value: ");
  scanf("%d", &a);
  printf("enter second value: ");
  scanf("%d", &b);
  printf("enter third value: ");
  scanf("%d", &c);
  printf("enter fourth value: ");
  scanf("%d", &d);
  printf("enter fifth value: ");
  scanf("%d", &e);

  float average = get_average(a, b, c, d, e);
  printf("The average is: %.2f", average);

  return 0;
}

float get_average(int a, int b, int c, int d, int e){
  float sum = a + b + c + d + e;
  return sum / 5;
}