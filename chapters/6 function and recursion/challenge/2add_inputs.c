#include<stdio.h>

int add(int, int, int, int);

int main(){
  printf("adding input numbers\n");
  printf("%d\n", add(1, 2, 3, 4));
  printf("%d\n", add(4, 26, 83, 74));

  return 0;
}

int add(int a, int b, int c, int d){
  int sum = a + b + c + d;
  return sum;
}