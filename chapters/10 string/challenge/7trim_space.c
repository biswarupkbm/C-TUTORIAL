#include<stdio.h>
#include<string.h>

int main(){
  char input[100];
  char trimed[100];
  printf("trimming of the string\n");
  printf("enter the text: ");
  fgets(input, sizeof(input), stdin);

  int start = 0;
  int end = strlen(input) -1;

  while (input[start] == ' ') start++;
  while (input[end] == ' ' || input[end] == '\n') end--;

  int i = 0;
  while(i <= end - start){
    if(input[i + start] == ' '){
      trimed[i] = '-';
    } else{
      trimed[i] = input[i + start];
    }
    i++;
  }
  trimed[i] = '\0';
  printf("finaml trimed string is: %s", trimed);

  return 0;
}