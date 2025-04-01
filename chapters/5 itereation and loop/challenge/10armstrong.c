#include<stdio.h>

int main(){
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  int sum = 0;
  int copy = num;

  while(copy > 0){
    int digit = copy % 10;
    sum += digit * digit * digit;
    copy /= 10;
  }

  if(sum == num){
    printf("The number %d is a armstrong number.",num);
  } else {
    printf("The number %d is not a armstrong number.",num);
  }

  return 0;
}  