#include<stdio.h>
#include<string.h>

int main(){
  char name[4][20] = {"kriahna", "radha", "gourang", "nitai"};

  for(int i=0; i<4; i++){
    puts(name[i]);
  }

  //individual string as character
  for(int i=0; i<4; i++){
    for(int j=0; j<strlen(name[i]); j++){
      printf("%c", name[i][j]);
    }
    printf("\n");
  }

  return 0;
}