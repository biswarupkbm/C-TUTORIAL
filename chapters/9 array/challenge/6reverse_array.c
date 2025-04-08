#include<stdio.h>

void swap(int *first, int *second);
void reverse(int arr[], int size);
void print_arr(int arr[], int size);

int main(){
  printf("reversing arrays\n");
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int arr2[] = {1, 2, 3, 4, 5};

  printf("before reverse ");
  print_arr(arr1, 8);
  reverse(arr1, 8);
  printf("\nafter reverse ");
  print_arr(arr1, 8);
  
  printf("\nbefore reverse ");
  print_arr(arr2, 5);
  reverse(arr2, 5);
  printf("\nafter reverse ");
  print_arr(arr2, 5);

  return 0;
}

void reverse(int arr[], int size){
  for(int i=0; i<size / 2; i++){
    swap(&arr[i], &arr[size -1 -i]);
  }
}

void swap(int *first, int *second){
  int temp = *first;
  *first = *second;
  *second = temp;
}

void print_arr(int arr[], int size){
  for(int i=0; i<size; i++){
    printf(" %d", arr[i]);
  }
}

