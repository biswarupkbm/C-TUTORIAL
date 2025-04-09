#include<stdio.h>
#include<string.h>

int main(){
  const char  EXIT[] = "exit";
  char command[20];
  
  printf("exit to the system\n");
  while(1){
    printf("enter the command: ");
    scanf("%s", command);
    if(strcmp(command, EXIT) == 0){
      break;
    }
  }
  printf("Exited successfully");
  
  return 0;
}