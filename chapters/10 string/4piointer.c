#include<stdio.h>

int main(){
  // character array = modifiable
  char name[] = "radha krishna";
  printf("array: before modifying: %s\n",name);
  name[6] = 'K';
  printf("array: after modifying: %s\n",name);

  // character pointer to string literal = not modifiable
  char *nick_name[] = "radha krishna";
  printf("array: before modifying: %s\n",name);
  name[6] = 'K';
  printf("array: after modifying: %s\n",name);
}