#include<stdio.h>

int is_sorted(int arr[], int size);

int main(){
  printf("checking array is sorted or not\n");
  int arr1[5] = {5, 8, 9, 9, 10};  //increasing order
  int arr2[5] = {76, 70, 50, 12, 12}; //decreasing order
  int arr3[5] = {87, 0, 67, -98, 5}; //not sorted

  if(is_sorted(arr1, 5)){
    printf("first array is sorted\n");
  } else {
    printf("first array is not sorted\n");
  }

  if(is_sorted(arr2, 5)){
    printf("second array is sorted\n");
  } else {
    printf("second array is not sorted\n");
  }

  if(is_sorted(arr3, 5)){
    printf("third array is sorted\n");
  } else {
    printf("third array is not sorted\n");
  }
  
  return 0;
}

int is_sorted(int arr[], int size){
  int increasing = 1;
  int decreasing = 1;

  for(int i=1; i<size; i++){
    if(arr[i] > arr[i-1]){
      decreasing = 0;
    } else if(arr[i] < arr[i-1]){
    increasing = 0;
   }
  }
  return increasing || decreasing;
}
