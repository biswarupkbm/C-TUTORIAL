#include<stdio.h>
#include<stdlib.h>

int main(){
  int size;

  printf("enter the  no of elements: ");
  scanf(" %d", &size);

  // // dynamic memory allocation using malloc
  int *arr = (int*) malloc(sizeof(int) * size);

  // // check if the memory has been successfully allocated or not
  if(arr == NULL){
    printf("Not enough memory");
    return 1;
  }
  

  for(int i=0; i<size; i++){
    printf("enter element number %d: ", i+1);
    scanf(" %d", &arr[i]);
  }
  
  long sum = 0;
  for(int i=0; i<size; i++){
    sum += arr[i];
  }
  printf("the sum of element is: %d", sum);

  return 0;
}