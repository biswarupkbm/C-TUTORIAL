#include<stdio.h>

struct Student{
  int rollno;
  char name[20];
  float marks;
};

int main(){

  struct  Student student = {1, "ram", 65.74};
  struct Student *ptr_student = &student;

  
  printf("RollNo: %d, Name: %s, marks: %.2f\n", student.rollno, student.name, student.marks);

  printf("RollNo: %d, Name: %s, marks: %.2f\n", (*ptr_student).rollno, (*ptr_student).name, (*ptr_student).marks);

  printf("RollNo: %d, Name: %s, marks: %.2f", ptr_student->rollno, ptr_student->name, ptr_student->marks);

}