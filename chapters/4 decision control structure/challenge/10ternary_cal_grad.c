#include<stdio.h>

int main(){
  int marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  printf("\nYour marks are in this category: ");
  marks > 80 ? printf("High")
             : (marks >= 50 ? printf("Moderate")
                            : printf("Low"));
  return 0;
}  