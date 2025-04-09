#include<stdio.h>
#include<string.h>

void reverse_string(char str[]);
int main(){
  char text[100];

  printf("reversing a string\n");
  printf("enter the string: ");
  fgets(text, sizeof(text), stdin);

  printf("original string is: %s", text);
  reverse_string(text);
  puts("text after reverse is: ");
  puts(text);
  
  return 0;
}
void reverse_string(char str[]){
  int length = strlen(str);
  for(int i=0; i<length / 2; i++){
    char temp = str[i];
    str[i] = str[length -1 -i];
    str[length -1 -i] = temp;

  }
}