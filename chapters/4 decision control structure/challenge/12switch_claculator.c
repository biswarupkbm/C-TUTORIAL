#include<stdio.h>

int main(){
  int num1, num2;
  char opr;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  printf("Enter operator: ");
  scanf(" %c", &opr);
  
  int res, invalid = 0;

  switch (opr)
  {
  case '+': res = num1 + num2;
    break;
  case '-': res = num1 - num2;
    break;
  case '*': res = num1 * num2;
    break;
  case '/': res = num1 / num2;
    break;

  default : invalid = 1;
    break;
  }
  if(invalid == 0){
    printf("The result is: %d", res);
  } else {
    printf("Invalid operator");
  }


  return 0;
}  