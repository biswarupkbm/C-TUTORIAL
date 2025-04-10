#include<stdio.h>
#include<string.h>

typedef struct Car{
  char make[50];
  char model[50];
  int year;
  char color[20];
}Car;

void print_car(Car *car);

int main(){
  Car car = {.make = "Ford", .model = "Aspire", .year = 2016, .color = "Red"};

  printf("car world\n");
  
  print_car(&car);

  return 0;
}

void print_car(Car *car){
  printf("this %s model of car, which is of %s color, was purched in %d year and is made by %s company\n",car->model, car->color, car->year, car->make);
}