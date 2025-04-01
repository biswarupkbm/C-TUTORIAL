#include<stdio.h>

int main(){
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  int i = 1;
  int facts = 1;
  while(i <= num){
    facts *= i;
    i++;
  }
  printf("factorial of %d is: %d\n", i, facts);


  return 0;
}  