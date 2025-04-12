#include<stdio.h>
#include<stdlib.h>

int main(){

  // dynamic memory allocation using malloc
  int *arr = (int*) calloc(2, sizeof(int));
  
  // check if the memory has been successfully allocated or not
  if(arr == NULL){
    printf("Not enough memory");\
    return 1;
  }
  printf("address of arr %p\n", arr);
  arr[0] = 45;
  arr[1] = 74;
  
  arr = (int*) realloc(arr, 3 * sizeof(int));
  if(arr == NULL){
    printf("Not enough memory");\
    return 1;
  }
  printf("address of arr %p\n", arr);
  printf("original element are: %d ,  %d", arr[0], arr[1]);
  
  arr[2] = 98;

  return 0;
}