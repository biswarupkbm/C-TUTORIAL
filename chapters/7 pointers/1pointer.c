#include<stdio.h>

int main(){
  int i = 3;
  int *j = &i;
  // int *j;
  // j = &i;
  int **k = &j;
  // int **k;
  // k = &j;

  printf("address of i = %p\n", &i);
  printf("address of i = %p\n", j);
  printf("address of i = %p\n", *k);
  printf("address of j = %p\n", &j);
  printf("address of j = %p\n", k);
  printf("address of k = %p\n", &k);
  printf("value of j = %p\n", j);
  printf("value of k = %p\n", k);
  printf("value of i = %d\n", i);
  printf("value of i = %d\n", *(&i));
  printf("value of i = %d\n", *j);
  printf("value of i = %d\n", **k);

  return 0;
}