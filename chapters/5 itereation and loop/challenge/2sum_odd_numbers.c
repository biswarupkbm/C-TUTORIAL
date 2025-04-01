#include<stdio.h>

int main(){
  int num, i, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &num);
  
  for(i=1; i<=num; i++){
    if(i % 2 == 0){
      continue;
    }
    sum += i;
  }
  printf("%d\n", sum);
  

  // while loop
  int num, i = 1, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  while (i<=num){
    if(i % 2 == 0){
      i++;
      continue;
    }
    sum += i;
    i++;
  }
  printf("%d\n", sum);

  
  return 0;
}  