#include<stdio.h>
#include<string.h>

typedef struct Book{
  char title[100];
  char author[100];
  int price;
}Book;

void print_book(Book *book);

int main(){
  printf("abhaycharan book store\n");

  Book book[2] = {
    {.title = "Krishna", .author = "Abhaycharan", .price = 300},
    {.title = "Bhagvatgita", .author = "Abhaycharan", .price = 300}
  };

  for(int i=0; i<2; i++){
    print_book(&book[i]);
  }

  return 0;
}

void print_book(Book *book){
  printf(" %s writen by %s and is sold for %d\n", book->title, book->author, book->price);
}