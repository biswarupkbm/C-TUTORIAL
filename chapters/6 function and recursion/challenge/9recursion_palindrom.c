#include<stdio.h>

int reverse(int num, int rev);

int main(){
  int num;
  printf("palindrome by recursion\n");
  printf("enter the number: ");
  scanf("%d", &num);

  int rev = reverse(num, 0);
  if(num == rev){
    printf("%d is palindrom", num);
  } else{
    printf("%d is not palindrom", num);
  }

  return 0;
}

int reverse(int num, int rev){
  if(num == 0){
    return rev;
  }
  int remainder = num % 10;
  int new_num = num / 10;
  int new_rev = rev * 10 + remainder;
  return reverse(new_num, new_rev);
}