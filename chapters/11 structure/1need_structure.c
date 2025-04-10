#include<stdio.h>

int main(){
  int rollNo[5] = {1, 2, 3, 4, 5};
  char names[5][20] = {"ram", "shyam", "sita", "geeta", "shanak"};
  float marks[5] = {45.6, 85.7, 72.4, 89.4, 93.7};

  for(int i=0; i<5; i++){
    printf("Student Name: %s, RollNo: %d, Marks: %.2f\n",names[i], rollNo[i], marks[i]);
  }


}