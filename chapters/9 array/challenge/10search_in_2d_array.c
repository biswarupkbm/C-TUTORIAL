#include<stdio.h>

// return no of occurrences
int search(int arr[3][3], int rows, int cols, int element);

int main(){
  printf("searching in 2d array\n");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

  int occ = search(arr, 3, 3, 2);
  printf("searching for 2 found %d occ\n", occ);

  occ = search(arr, 3, 3, 5);
  printf("searching for 5 found %d occ\n", occ);

  occ = search(arr, 3, 3, 9);
  printf("searching for 9 found %d occ\n", occ);

  return 0;
}

int search(int arr[3][3], int rows, int cols, int element){
  int occ = 0;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      if(arr[i][j] == element){
        occ++;
      }
    }
  }
  return occ;
}