#include<stdio.h>

int main(){
  for loop
  int num, i;

  printf("Enter the table number: ");
  scanf("%d", &num);
  
  for(i=1; i<=10; i++){
    printf("%d x %d = %d\n",num, i, num*i);
    }
    
    // while loop
    int num, i=1;

    printf("Enter the table number: ");
    scanf("%d", &num);

    while(i<=10){
      printf("%d x %d = %d\n",num, i, num*i);

      i++;
  }

  return 0;
} 