#include<stdio.h>

int main(){
  int arr[5];

  printf("min and min of array\n");
  for(int i=0; i<5; i++){
    printf("enter %dth element: ", (i+1));
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  for(int i=1; i<=5; i++){
    if(max < arr[i]){
      max = arr[i];
    }
    if(min > arr[i]){
      min = arr[i];
    }
  }
  printf("the value of max is %d and min is %d", max, min);
  
  return 0;
}