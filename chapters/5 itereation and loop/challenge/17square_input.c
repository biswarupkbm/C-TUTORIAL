#include<stdio.h>

int main(){
  int num;

  printf("Printing squares of input until -1\n");

  while(1){
    printf("enter the number: ");
    scanf("%d", &num);

    if(num == -1) break;

    printf("the square of %d is %d\n", num, num*num);
  }

  return 0;
}