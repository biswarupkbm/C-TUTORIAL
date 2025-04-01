#include<stdio.h>

int main(){
  
  int num;

  do{
    printf("Enter positive number: ");
    scanf("%d", &num);
  } while(num <=0);

  printf("You have successfully entered a positive number");
  
  return 0;
}