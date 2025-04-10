#include<stdio.h>
#include<string.h>

typedef struct{
  char id[10];
  char name[100];
  char year[10];
  char grade;
}Student;

void increase_grade(Student*);
void decrease_grade(Student*);
void print_student(Student*);

int main(){
  Student stu1 = {.id = "CS001", .name = "Radha", .year = "1st", .grade = 'B'};
  Student stu2 = {.id = "CS002", .name = "Krishna", .year = "1st", .grade = 'A'};
  Student stu3 = {.id = "CS001", .name = "Gourang", .year = "3rd", .grade = 'F'};

  printf("here are the student details\n");
  print_student(&stu1);
  print_student(&stu2);
  print_student(&stu3);
  
  decrease_grade(&stu1);
  increase_grade(&stu3);

  printf("after changes\n");
  print_student(&stu1);
  print_student(&stu2);
  print_student(&stu3);

  return 0;
}

void increase_grade(Student *stu){
  stu -> grade--;
}

void decrease_grade(Student *stu){
  stu -> grade++;
}

void print_student(Student *stu){
  printf("The student with %s name has id: %s and studies in %s year has achieved %c grade\n", stu->name, stu->id, stu->year, stu->grade);
}
