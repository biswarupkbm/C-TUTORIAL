#include<stdio.h>
#include<string.h>

void input_book(char title[], char author[], int *price){
  printf("enter the book title: ");
  fgets(title, 100, stdin);
  title[strcspn(title, "\n")] = 0;

  printf("enter the book's author: ");
  fgets(author, 100, stdin);
  author[strcspn(author, "\n")] = 0;

  printf("enter the book's price in Rs: ");
  scanf("%d", &price);

  while(getchar() != '\n');
}

void print_book(char title[], char author[], int price){
  printf("book's title: %s\nbook's author: %s\nbook's price: %d\n", title, author, price);
}

int main(){
  printf("Abhaycharan book store\n");

  char title[2][100];
  char author[2][100];
  int price[2];

  for(int i=0; i<2; i++){
    input_book(title[i], author[i], &price[i]);
  }
  
  printf("The book details are:\n");
  for(int i=0; i<2; i++){
    print_book(title[i], author[i], price[i]);
  }

  return 0;
}