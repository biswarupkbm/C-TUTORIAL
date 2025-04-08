#include<stdio.h>

void merge_sorted_arr(int arr1[], int size1,   int arr2[], int size2,  int arr3[], int size3);
void print_arr(int arr[], int size);

int main(){
  int arr1[5] = {1, 3, 5, 7, 9};
  int arr2[7] = {2, 4, 6, 8, 10, 12, 14};
  int arr3[12];

  printf("meging sorted array\n");
  printf("Here is the merged array: ");
  merge_sorted_arr(arr1, 5, arr2, 7, arr3, 12);
  print_arr(arr3, 12);

  return 0;
}

void print_arr(int arr[], int size){
  for(int i=0; i<size; i++){
    printf(" %d", arr[i]);
  }
}

void merge_sorted_arr(int arr1[], int size1,   int arr2[], int size2,  int arr3[], int size3){
  int i=0, j=0, k=0;
  while(k < size3){
  if(j == size2 || (i < size1 && arr1[i] < arr2[j])){
    arr3[k] = arr1[i++];
  } else {
    arr3[k] = arr2[j++];
  }

    // if(j == size2){
    //   arr3[k] = arr1[i];
    //   i++;
    // } else if(i == size1){
    //   arr3[k] = arr2[j];
    //   j++;
    // }else if(arr1[i] < arr2[j]){
    //   arr3[k] = arr1[i];
    //   i++;
    // } else {
    //   arr3[k] = arr2[j];
    //   j++;
    // }

    k++;
  }
}

