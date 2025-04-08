#include<stdio.h>
int sum(int arr[3][3], int rows, int cols);

int main(){
  printf("sum and average of 2d array\n");

  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

  int addition = sum(arr, 3, 3);
  int avg = addition / 9;
 
  printf("The sum is %d and average is %d", addition, avg);
  
  return 0;
}

int sum(int arr[3][3], int rows, int cols){
  int sum = 0;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      sum += arr[i][j];
    }
  }
  return sum;
}