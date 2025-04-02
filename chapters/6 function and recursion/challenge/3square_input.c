#include<stdio.h>

int square(int);

int main(){
  int num;
  printf("enter the number: ");
  scanf("%d", &num);

  printf("the square of %d is: %d", num, square(num));

  return 0;
}

int square(int num){
  return num * num;
}