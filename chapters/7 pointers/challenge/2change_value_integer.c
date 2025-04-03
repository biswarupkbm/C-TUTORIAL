#include<stdio.h>

int main(){
  int num = 10;
  int *ptr = &num;
  
  printf("value of num is: %d\n", num);

  *ptr = 15;
  printf("changing value of \'num\' using pointer: %d\n", num);
  
  return 0;
}