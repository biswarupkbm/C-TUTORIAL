#include<stdio.h>
#include<stdlib.h>

int main(){
  int size;

  printf("enter the  no of elements: ");
  scanf(" %d", &size);

  // dynamic memory allocation using malloc
  int *arr = (int*) calloc(size, sizeof(int));

  // check if the memory has been successfully allocated or not
  if(arr == NULL){
    printf("Not enough memory");\
    return 1;
  }

  // checking memory allocated to zero
  for(int i=0; i<size; i++){
    printf(" %d", arr[i]);
  }

  for(int i=0; i<size; i++){
    printf("enter element number %d: ", i+1);
    scanf(" %d", &arr[i]);
  }
  
  long long sum = 0;
  for(int i=0; i<size; i++){
    sum += arr[i];
  }
  printf("the sum of element is: %d", sum);

  return 0;
}