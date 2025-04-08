#include<stdio.h>

void copy_arr(char *arr, int size, char *new_arr);
void print_arr(char arr[], int size);

int main(){

  char arr[7] = {'k', 'r', 'i', 's', 'h', 'n', 'a'};
  char new_arr[7];

  printf("copying array using pointer arithmetic\n");

  printf("original char array:");
  print_arr(arr, 7);
  copy_arr(arr, 7, new_arr);
  printf("\ncopied char array: ");
  print_arr(new_arr, 7);
  
  return 0;
}

void copy_arr(char *arr, int size,char *new_arr){
  for(int i=0; i<size; i++){
    *(new_arr + i) = *(arr + i);

    // *new_arr = *arr;
    // new_arr++;
    // arr++;

  }
}

void print_arr(char arr[], int size){
  for(int i=0; i<size; i++){
    printf("%c", arr[i]);
  }
}

