#include<stdio.h>
#include<string.h>

int main(){
  const char  STORED_PASSWORD[] = "harekrishna@123";
  char password[50];

  printf("login secure system\n");
  printf("enter the password: ");
  scanf("%s", password);

  if(strcmp(password, SOTRED_PASSWORD) == 0){
    puts("Access granted to the system.");
  } else{
    puts("Access denied to the system.");
  }

  return 0;
}