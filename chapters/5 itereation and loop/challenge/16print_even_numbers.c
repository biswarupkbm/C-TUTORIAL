#include<stdio.h>

int main(){
  int num, i;

  printf("ente the maximum number: ");
  scanf("%d", &num);
  
  for(i=1; i<=num; i++){
    if(i % 2 == 1){
      continue;
    }
    printf("%d ", i);
  }
  return 0;
}