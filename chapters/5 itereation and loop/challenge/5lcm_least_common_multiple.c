#include<stdio.h>

int main(){
  int first, second;

  printf("Enter the first number: ");
  scanf("%d", &first);
  printf("Enter the second number: ");
  scanf("%d", &second);

  int min = first > second ? first : second ;
  int max = first * second ;
  for(int i = min; i<=max; i++){
    if(i % first == 0 && i % second == 0){
      printf("The lcm of %d and %d is: %d",first, second, i);
    }
  }

  return 0;
}  

