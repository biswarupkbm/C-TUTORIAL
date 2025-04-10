#include<stdio.h>

typedef struct Student{
  int rollno;
  char name[20];
  float marks;
}Student;

struct Student{
  int rollno;
  char name[20];
  float marks;
};


int main(){

  // method 1
  Student s = {1, "ram", 45.6};
  
  // method 2
  typedef struct Student Student;
  Student s= {1, "ram", 45.6};
  
  printf("Student Name: %s, RollNo: %d, Marks: %.2f\n", s.name, s.rollno, s.marks);
   
}