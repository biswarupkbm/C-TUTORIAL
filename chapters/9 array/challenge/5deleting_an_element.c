#include<stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element);
void print_arr(int arr[], int size);

int main(){
  printf("deleting elements\n");
  int arr[] = {2, 5, 7, 7, 9, 10, 1, 0};
  int new_arr[8];
  int new_size;

  delete(arr, 8, new_arr, &new_size, 5);
  printf("\n\nthe array deleting 5 is: ");
  print_arr(new_arr, new_size);

  delete(arr, 8, new_arr, &new_size, 9);
  printf("\n\nthe array deleting 9 is: ");
  print_arr(new_arr, new_size);

  delete(arr, 8, new_arr, &new_size, 8);
  printf("\n\nthe array deleting 8 is: ");
  print_arr(new_arr, new_size);
  return 0;
}

void print_arr(int arr[], int size){
  for(int i=0; i<size; i++){
    printf(" %d", arr[i]);
  }
}

void delete(int arr[], int size, int new_arr[], int *new_size, int element){
  int j=0;
  for(int i=0; i<size; i++){
    if(arr[i] != element){
      new_arr[j] = arr[i];
      j++;
    }
  }
  *new_size = j;
}
