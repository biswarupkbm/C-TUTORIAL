#include<stdio.h>

int main(){
  // normal method
  int marks1, marks2, marks3, marks4, marks5;
  // using array
  int marks[] = {23,53,63,32,53};
  int marks[5] = {23};

  printf("enter marks of student 1: ");
  scanf(" %d", &marks[0]);
  printf("enter marks of student 2: ");
  scanf(" %d", &marks[1]);
  printf("enter marks of student 3: ");
  scanf(" %d", &marks[2]);
  printf("enter marks of student 4: ");
  scanf(" %d", &marks[3]);
  printf("enter marks of student 5: ");
  scanf(" %d", &marks[4]);

  printf("Marks of student 1 are: %d\n", marks[0]);
  printf("Marks of student 2 are: %d\n", marks[1]);
  printf("Marks of student 3 are: %d\n", marks[2]);
  printf("Marks of student 4 are: %d\n", marks[3]);
  printf("Marks of student 5 are: %d\n", marks[4]);

  return 0;
}