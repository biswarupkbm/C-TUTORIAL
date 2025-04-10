#include<stdio.h>
#include<string.h>

typedef struct Book{
  char title[100];
  char author[100];
  int price;
}Book;

void input_book(Book *book);
void print_book(Book *book);

int main(){
  Book book[2];

  printf("abhaycharan book store\n");

  for(int i=0; i<2; i++){
    input_book(&book[i]);
  }
  
  for(int i=0; i<2; i++){
    print_book(&book[i]);
  }

  return 0;
}

void input_book(Book *book){
  printf("enter the book title: ");
  fgets(book->title, 100, stdin);
  book->title[strcspn(book->title, "\n")] = 0;
  
  printf("enter the book author: ");
  fgets(book->author, 100, stdin);
  book->author[strcspn(book->author, "\n")] = 0;

  printf("enter the book price: ");
  scanf("%d", &book->price);

  while(getchar() != '\n');
  
}
void print_book(Book *book){
  printf(" %s writen by %s and is sold for %d\n", book->title, book->author, book->price);
}