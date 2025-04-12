#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int x;
  int y;
} Point;

void input_point(Point *);
void show_point(Point *);

int main()
{
  printf("Dynamic points\n");

  Point *start = (Point *)malloc(sizeof(Point));
  Point *end = (Point *)malloc(sizeof(Point));

  if (start == NULL || end == NULL)
  {
    printf("memory was not allocated");
    return 1;
  }

  printf("enter the details for starting point of your line: \n");
  input_point(start);
  printf("enter the details for ending point of your line: \n");
  input_point(end);

  printf("here are details: ");
  show_point(start);
  show_point(end);

  free(start);
  free(end);
  start = end = NULL;

  return 0;
}

void input_point(Point *point)
{
  printf("enter x Coordinate: ");
  scanf("%d", &point->x);
  printf("enter y Coordinate: ");
  scanf("%d", &point->y);
}

void show_point(Point *point)
{
  printf(" Coordinates(%d, %d)", point->x, point->y);
}