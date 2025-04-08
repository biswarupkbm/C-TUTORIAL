#include<stdio.h>
int occurrences(int arr[], int size, int element);

int main(){
  int arr[] = {3, 5, 6, 2, 56, 3, 62, 3, 12, 2};

  printf("finding element occurrences\n");

  int result = occurrences(arr, 10, 3);
  printf("the number of occurrences of 3 are %d\n", result);
  result = occurrences(arr, 10, 5);
  printf("the number of occurrences of 5 are %d\n", result);
  result = occurrences(arr, 10, 2);
  printf("the number of occurrences of 2 are %d\n", result);
  result = occurrences(arr, 10, 62);
  printf("the number of occurrences of 62 are %d\n", result);
  result = occurrences(arr, 10, 17);
  printf("the number of occurrences of 17 are %d\n", result);
  
  return 0;
}

int occurrences(int arr[], int size, int element){
  int counter = 0;
  for(int i=0; i<size; i++){
    if(arr[i] == element){
      counter++;
    }
  }
  return counter;
}