#include<stdio.h>

int main(){
  int first, second;

  printf("Enter the first number: ");
  scanf("%d", &first);
  printf("Enter the second number: ");
  scanf("%d", &second);

  int min = first > second ? first : second ;
  for(int i = min; i>=1; i--){
    if(first % i == 0 && second % i == 0){
      printf("The gcd of %d and %d is: %d",first, second, i);
      break;
    }
  }

  return 0;
}  

