#include<stdio.h>
#include<string.h>

int main(){
  const char  STORED_PASSWORD[] = "harekrishna@123";
  char password[20];
  
  printf("login secure system\n");
  do{
    printf("enter the correct password: ");
    scanf("%s", password);
  } while(strcmp(password, STORED_PASSWORD) != 0);
  puts("Access granted to the system.");

  return 0;
}