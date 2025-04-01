#include<stdio.h>

int main(){
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);
  
  int reverse = 0;
  int copy = num;
  while(copy > 0){
    reverse = (reverse * 10) + (copy % 10);
    copy /= 10;
  }

  printf("the reverse of %d is: %d\n",num, reverse);

  if(reverse == num){
    printf("The number %d -> %d is palindrome",num, reverse);
  } else {
    printf("The number %d -> %d is not palindrome",num, reverse);
  }

  return 0;
}  