#include<stdio.h>

void count_to_10();
int sum(int a, int b);



int main(){
  count_to_10();
  int addtion =sum(2, 4);
  printf("\nthe sum is: %d", addtion);
  
  int x = 10;
  int y = 20;
  int z = sum(x, y);
  printf("\nthe sum is: %d", z);


  return 0;
}

void count_to_10(){
  for(int i=1; i<=10; i++){
    printf("%d ", i);
  }
}

int sum(int a, int b){
  int add = a + b ;
  return add;
}