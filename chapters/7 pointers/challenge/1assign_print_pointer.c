#include<stdio.h>

int main(){
  int num;
  int *ptr = &num;

  printf("enter the number: ");
  scanf("%d", ptr);

  printf("printing value of \'num\' using pointer: %d\n", *ptr);
  printf("printing value of \'num\': %d", num);
  
  return 0;
}