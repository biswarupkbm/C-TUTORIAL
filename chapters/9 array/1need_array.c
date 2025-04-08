#include<stdio.h>

int main(){
  int marks1, marks2, marks3, marks4, marks5;

  // we can't write multiple lines of code (like declar, taking input and showing out)
  // therefore, array helps us shorter
  printf("enter marks of student 1: ");
  scanf(" %d", &marks1);
  printf("enter marks of student 2: ");
  scanf(" %d", &marks2);
  printf("enter marks of student 3: ");
  scanf(" %d", &marks3);
  printf("enter marks of student 4: ");
  scanf(" %d", &marks4);
  printf("enter marks of student 5: ");
  scanf(" %d", &marks5);

  printf("Marks of student 1 are: %d\n", marks1);
  printf("Marks of student 2 are: %d\n", marks2);
  printf("Marks of student 3 are: %d\n", marks3);
  printf("Marks of student 4 are: %d\n", marks4);
  printf("Marks of student 5 are: %d\n", marks5);

  return 0;
}