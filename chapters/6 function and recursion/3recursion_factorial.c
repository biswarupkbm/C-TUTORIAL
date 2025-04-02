#include<stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main(){
  int factorial1 = factorial_using_loop(5);
  printf("factorial using loop is: %d\n", factorial1);
  
  int factorial2 = factorial_using_recursion(4);
  printf("factorial using recursion is: %d\n", factorial2);

  return 0; 
}

int factorial_using_loop(int num){
  int result = 1;
  for(int i=2; i<=num; i++){
    result *= i; 
  }
  return result;
}

int factorial_using_recursion(int num){
  if(num == 0){
    return 1;
  }
  return num * factorial_using_recursion(num - 1);
}