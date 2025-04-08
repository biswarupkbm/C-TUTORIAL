#include<stdio.h>

int main(){
  int marks[5];
  int no_of_students = 5;

  for(int i=0; i<no_of_students; i++){
    printf("enter marks of student %d:", i+1);
    scanf(" %d", &marks[i]);
  }
  for(int i=0; i<no_of_students; i++){
    printf("Marks of students %d are: %d\n", i+1, marks[i]);
  }

  return 0;
}