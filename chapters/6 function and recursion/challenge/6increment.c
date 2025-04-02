#include<stdio.h>

void increment(int);

int main(){
  int num;
  printf("welcome to sharing call by value\n");
  printf("enter the number: ");
  scanf("%d", &num);

  printf("Before: value of number is: %d\n", num);
  increment(num);
  printf("After: value of number is: %d\n", num);

  return 0;
}

void increment(int a){
  printf("In function Before: value of a is: %d\n", a);
  a++;
  printf("In function After: value of a is: %d\n", a);
}