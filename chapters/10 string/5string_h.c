#include<stdio.h>
#include<string.h>

int main(){
  // string.h types
  char name[25];
  printf("enter your name: ");
  fgets(name, 25, stdin);

  // 1 strlen string length
  int size = strlen(name);
  printf("the length of your name is: %d", size);
  
  // 2 strcpy string copy
  char new_name[25];
  strcpy(new_name, name); // destination, source
  printf("%s has been copied to: %s", name, new_name);

  // 3 strcat string concatinate
  char f_name[20] = "hello";
  char l_name[20] = " world";
  strcat(f_name, l_name);
  printf("concating two string: %s", f_name);

  // 4 strcmp string comparison acording to dicsionary
  // -1 = fisrt string come first
  // 1 = second string come first
  // 0 = both string come first
  int compparison = strcmp("apple", "banana");
  printf("comparison of apple and banana is %d\n", compparison);

  compparison = strcmp("cherry", "banana");
  printf("comparison of apple and banana is %d\n", compparison);

  compparison = strcmp("apple", "apple");
  printf("comparison of apple and banana is %d\n", compparison);

  return 0;
}