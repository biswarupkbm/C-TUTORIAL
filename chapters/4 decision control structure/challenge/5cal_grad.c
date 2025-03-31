#include<stdio.h>

int main(){
  int marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  if(marks > 90){
    printf("You have got A grade");
  }
  if(marks > 75){
    printf("You have got B grade");
  }
  if(marks > 60){
    printf("You have got C grade");
  }
  if(marks > 30){
    printf("You have got D grade");
  } else {
    printf("You have failed the exam with F grade");
  }

  return 0;
}  