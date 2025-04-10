#include<stdio.h>

struct Student{
  int rollno;
  char name[20];
  float marks;
};

void print_student(struct Student std); // call by value
void print_student_from_pointer(struct Student *ptr); // call by reference

int main(){

  struct  Student student = {1, "ram", 65.74};
  struct Student *ptr_student = &student;

  print_student(student);

  print_student(*ptr_student); // call by value

  printf("RollNo: %d, Name: %s, marks: %.2f\n", student.rollno, student.name, student.marks);

  print_student_from_pointer(ptr_student); // call by reference

  printf("RollNo: %d, Name: %s, marks: %.2f\n", student.rollno, student.name, student.marks);

}

void print_student(struct Student std){
  std.rollno = 06;
  printf("RollNo: %d, Name: %s, marks: %.2f\n", std.rollno, std.name, std.marks);
}

void print_student_from_pointer(struct Student *ptr){
  ptr->rollno = 07;
  printf("RollNo: %d, Name: %s, marks: %.2f\n", ptr->rollno, ptr->name, ptr->marks);
}