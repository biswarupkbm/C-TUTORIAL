#include<stdio.h>

int main(){
  int row , i, j;

  printf("enter row: ");
  scanf("%d", &row);

  
  
  printf("Right half pyramid\n");
  for(i=1; i<=row; i++){
    for(j=1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
  
  printf("left half pyramid\n");
  for(i=1; i<=row; i++){
    for(int k=0; k<row-i; k++){
      printf("  ");
    }
    for(j=1; j<=i; j++){
      printf(" *");
    }
    printf("\n");
  }

  printf("reverse right half pyramid\n");
  for(i=1; i<=row; i++){
    for(j=row; j>=i; j--){
      printf("* ");
    }
    printf("\n");
  }


  printf("reverse left half pyramid\n");
  for(i=1; i<=row; i++){
    for(int k=1; k<=i-1; k++){
      printf("  ");
    }
    for(j=row; j>=i; j--){
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}