#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
  char name[25];

  printf("taking input to string and converting to UPPERCASE\n");
  printf("enter the name: ");
  fgets(name, sizeof(name), stdin);

  // for(int i=0; name[i] != '\0'; i++ ){
  for(int i=0; i< strlen(name); i++ ){
    name[i] = toupper(name[i]);
  }

  printf("the name you enter is: %s", name);

  return 0;
}