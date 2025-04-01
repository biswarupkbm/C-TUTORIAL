#include<stdio.h>

int main(){
  
  int num, sum = 0;

  do{
    printf("Enter the number: ");
    scanf("%d", &num);
    sum += num;
  } while(num != 0);

  printf("The sum of all your number is: %d",sum);
  
  return 0;
}