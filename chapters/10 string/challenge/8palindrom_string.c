#include<stdio.h>
#include<string.h>

int is_palindrome(char arr[]);

int main(){
  char text[20];

  printf("palindrome string checking\n");
  printf("enter your name: ");
  scanf("%s", &text);

  if(is_palindrome(text)){
    puts("your input is palindrome");
  } else{
    puts("your input is not palindrome");
  }

  return 0;
}

int is_palindrome(char arr[]){
  int len = strlen(arr);
  for(int i=0; i<len/2; i++){
    if(arr[i] == arr[len - 1 - i]){
      return 1;
    }
  }
  return 0;
}
