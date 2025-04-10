#include<stdio.h>

struct Student{
  int rollno;
  char name[20];
  float marks;
};

int main(){
  struct  Student students[5] ={
    {1, "ram", 45.6},
    {2, "shyam", 85.7},
    {3, "sita", 72.4},
    {4, "geeta", 89.4},
    {5, "shanak", 93.7}
  };
  
  
  for(int i=0; i<5; i++){
    printf("Student Name: %s, RollNo: %d, Marks: %.2f\n", students[i].name, students[i].rollno, students[i].marks);
  }

}