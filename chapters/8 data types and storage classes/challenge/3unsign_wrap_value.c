#include<stdio.h>
#include<limits.h>

int main(){
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("Max value of unsigned int is: %u\n", positive);
  printf("Max value of normal int is: %d\n", normal);
  
  positive++;
  normal++;
  
  printf("Max value of unsigned int is: %u\n", positive);
  printf("Max value of normal int is: %d\n", normal);
  
  return 0; 
}