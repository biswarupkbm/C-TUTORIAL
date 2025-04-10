#include<stdio.h>

struct Student{
  int rollno;
  char name[20];
  float marks;
};

int main(){
  // declaration
  struct Student student1;

  printf("enter student details\n");
  printf("enter the roll no: ");
  scanf("%d", &student1.rollno);
  printf("enter the name: ");
  scanf(" %9s", &student1.name);
  printf("enter the marks: ");
  scanf(" %f", &student1.marks);

  printf("here are the student details\n");
  printf("RollNo: %d, Name: %s, marks: %.2f", student1.rollno, student1.name, student1.marks);
  
}