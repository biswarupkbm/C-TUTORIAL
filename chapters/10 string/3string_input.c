#include<stdio.h>

int main(){
  // string input & output
  char name[25];
  printf("enter your name: ");
  gets(name); // not recommended
  printf("Good morning %s", name);
  puts(name);

  printf("enter your nickname: ");
  fgets(name, sizeof(name), stdin);  // safe way
  printf("Good morning ");
  puts(name);

  return 0;
}