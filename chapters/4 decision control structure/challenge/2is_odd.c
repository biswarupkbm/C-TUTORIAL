#include<stdio.h>

int main(){
  int number;

  printf("enter your number: ");
  scanf("%d", &number);

  if(number % 2 == 0){
    printf("Number is even");
  } else {
    printf("Number is odd");
  }

  return 0;
}  