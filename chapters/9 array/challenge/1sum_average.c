#include<stdio.h>
int sum(int arr[], int size);

int main(){
  int arr[10];
  printf("sum and average of array\n");
  for(int i=0; i<10; i++){
    printf("enter the %dth element: ",(i+1));
    scanf(" %d", &arr[i]);
  }

  int addition = sum(arr, 10);
  int avg = addition / 10;
  printf("The sum of the number is %d and their average is %d", addition, avg);
  
  return 0;
}

int sum(int arr[], int size){
  int addition = 0;
  for(int i=0; i<size; i++){
    addition += arr[i];
  }
  return addition;
}