#include<stdio.h>

long long factorial(int);
int main(){
  printf("factorial of 4: %lld\n", factorial(4));
  printf("factorial of 5: %lld\n", factorial(5));
  printf("factorial of 10: %lld\n", factorial(10));
  printf("factorial of 20: %lld\n", factorial(20));
  printf("factorial of 25: %lld\n", factorial(25));

  return 0; 
}

long long factorial(int num){
  long long result = 1;
  for(int i=2; i<=num; i++){
    result *= i; 
  }
  return result;
}