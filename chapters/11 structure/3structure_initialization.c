#include<stdio.h>

struct Student{
  int rollno;
  char name[20];
  float marks;
};

int main(){
  // direct initialization
  struct Student s1 = {01, "ram", 99.0};

  // designated initialization
  struct Student s2 = {.name = "ram", .marks = 99.40, .rollno = 02};

  // zero initialization
  struct Student s3 = {0};

  // copy initialization
  struct Student s4 = s1;
  s4.rollno = 04;
 

  printf("here are the student details\n");
  printf("RollNo: %d, Name: %s, marks: %.2f\n", s1.rollno, s1.name, s1.marks);
  printf("RollNo: %d, Name: %s, marks: %.2f\n", s2.rollno, s2.name, s2.marks);
  printf("RollNo: %d, Name: %s, marks: %.2f\n", s3.rollno, s3.name, s3.marks);
  printf("RollNo: %d, Name: %s, marks: %.2f\n", s4.rollno, s4.name, s4.marks);
  
}