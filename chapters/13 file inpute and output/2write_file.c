#include<stdio.h>

int main(){
  FILE *file_pointer;
  char text[100];

  file_pointer = fopen("kbm.text", "a");

  if(file_pointer == NULL){
    printf("\nfile couldn't be opened");
    return 1;
  }

  fprintf(file_pointer, "\nhappy to you\n");
  fprintf(file_pointer, "sqare of %d is %d", 10, (10*10));

  int result = fclose(file_pointer);
  if(result == 0){
    file_pointer = NULL;
  } else {
    printf("\nfile was not closed");
  }
  return 0;
}