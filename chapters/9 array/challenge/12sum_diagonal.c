#include<stdio.h>

const int SIZE = 3;
// const int SIZE = 4;
void print_diagonal(int arr[][SIZE]);

int main(){
  printf("sum of diagonal in 2d array\n");

  int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int arr2[4][4] = {{8, 7, 6, 5}, {1, 2, 3, 4}, {5, 8, 3, 5}, {0, 1, 8, -2}};
  
  print_diagonal(arr1);
  // print_diagonal(arr2);

  return 0;
}

void print_diagonal(int arr[][SIZE] ){
  int sum_ld = 0;
  int sum_rd = 0;
  for(int i=0; i<SIZE; i++){
    sum_ld += arr[i][i];
    sum_rd += arr[i][SIZE -1 -i];
  }
  printf("the sum of left diagonal is %d\n", sum_ld);
  printf("the sum of right diagonal is %d\n", sum_rd);
  
  int total_ds = sum_ld + sum_rd;
  if(SIZE % 2 == 1){
    int index = SIZE / 2;
    total_ds -= arr[index][index];
  }
  printf("the sum of total diagonal is %d", total_ds);
}