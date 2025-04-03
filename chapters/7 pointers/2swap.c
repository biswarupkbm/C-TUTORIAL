#include<stdio.h>

void swap(int*, int*);

int main(){
  int x=10;
  int y= 20;
  printf("Before: value of x = %d & y = %d\n", x, y);
  
  swap(&x, &y);

  printf("After: value of x = %d & y = %d\n", x, y);
}

void swap(int *a, int *b){
  printf("In function Before: value of x= %d & y= %d\n", *a, *b);
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("In function After: value of x= %d & y= %d\n", *a, *b);
}