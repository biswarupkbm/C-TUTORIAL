#include<stdio.h>

long long factorial(int);
int main(){
  int num;

  printf("enter the number: ");
  scanf("%d", &num);

  long long result = factorial(num);
  printf("factorial of %d: %lld\n", num, result);

  return 0; 
}

long long factorial(int num){
  if(num <= 1){
    return 1;
  }
  return num * factorial(num - 1);
}