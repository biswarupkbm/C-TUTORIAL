#include<stdio.h>

int main(){
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);
  
  int sum = 0;
  int copy = num;
  while(num > 0){
    sum += num % 10;
    num /= 10;
  }
  printf("sum of digits of  %d is: %d\n", copy, sum);

  return 0;
}  