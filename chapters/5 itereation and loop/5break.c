#include<stdio.h>

int main(){
  int num;

  for(num=1; num<=10; num++){
    printf("%d\n",num);
    if(num == 5){
      break;
    }
  }

  return 0;
}  