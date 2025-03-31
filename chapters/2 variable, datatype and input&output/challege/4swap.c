#include<stdio.h>

int main(){
  int first, second, temp;
  printf("enter the first number: ");
  scanf("%d",&first);
  printf("enter the second number: ");
  scanf("%d",&second);

  temp = first;
  first = second;
  second = temp;

  printf("the swap values are %d and %d ",first,second);
  return 0;
}