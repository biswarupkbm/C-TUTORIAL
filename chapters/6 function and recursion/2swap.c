#include<stdio.h>

void swap(int , int);

int main(){

  int x = 5;
  int y = 10;
  printf("x: %d , y: %d\n", x, y);
  //call by value
  swap(x, y);

  return 0;
}

void swap(int first, int second){
  int temp = first;
  first = second;
  second = temp;
  printf("x: %d , y: %d", first, second);
}
