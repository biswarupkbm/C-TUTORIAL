#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char make[25];
  char model[25];
  int year;
  char color[15];
} Car;

void print_car(Car *car);

int main()
{
  printf("Dynamic Memory\n");
  Car *My_car = (Car *)malloc(sizeof(Car));
  if (My_car == NULL)
  {
    printf("memory was not allocated");
    return 1;
  }

  printf("enter your car model: ");
  scanf("%s", My_car->model);
  printf("enter your car company: ");
  scanf("%s", My_car->make);
  printf("enter your car color: ");
  scanf("%s", My_car->color);
  printf("enter your car year: ");
  scanf("%d", &My_car->year);

  printf("\n\nHere are your car details\n");
  print_car(My_car);
  free(My_car);
  My_car = NULL;

  return 0;
}

void print_car(Car *car)
{
  printf("this %s model of car, which is of %s color, was purched in %d year and is made by %s company\n", car->model, car->color, car->year, car->make);
}