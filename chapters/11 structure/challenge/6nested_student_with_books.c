
#include<stdio.h>
#include<string.h>

typedef struct Book{
  char title[100];
  char author[100];
  int price;
}Book;

typedef struct{
  char id[10];
  char name[100];
  char year[10];
  char grade;
  Book borroed_books[2];
  int no_of_books;
}Student;

void print_student(Student*);
void print_book(Book*);

int main(){
  Student stu1 = {.id = "CS001",
    .name = "Radha",
    .year = "1st",
    .grade = 'B',
    .no_of_books = 2,
    .borroed_books = {
      {.title = "Krishna", .author = "Abhaycharan", .price = 300},
      {.title = "Bhagvatgita", .author = "Abhaycharan", .price = 300}
    } 
  };

  printf("here are the student details\n");
  print_student(&stu1);
  

  return 0;
}

void print_student(Student *stu){
  printf("The student with %s name has id: %s and studies in %s year has achieved %c grade\n", stu->name, stu->id, stu->year, stu->grade);

  printf("here are the books borrowed:");
  for(int i=0; i<stu->no_of_books; i++)
  {
    print_book(&(stu->borroed_books[i]));
  }
}

void print_book(Book *book){
  printf("\n%s writen by %s and is sold for %d", book->title, book->author, book->price);
}
