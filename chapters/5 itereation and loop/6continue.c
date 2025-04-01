#include<stdio.h>

int main(){
  int num;

  for(num=1; num<=10; num++){
    if(num % 2 == 0){
      continue;
    };
    printf("%d\n",num);
  }

  return 0;
} 
 