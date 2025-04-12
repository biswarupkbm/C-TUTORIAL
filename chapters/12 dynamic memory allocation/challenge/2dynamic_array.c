#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char make[25];
  char model[25];
  int year;
  char color[15];
} Car;

int main()
{
  int size;

  printf("Dynamic arrays\n");
  printf("enter the number of elements: ");
  scanf("%d", &size);

  int *arr = (int *)malloc(size * sizeof(int));
  if (arr == NULL)
  {
    printf("memory was not allocated");
    return 1;
  }

  for (int i = 0; i < size; i++)
  {
    printf("enter elemet no %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("Here are your elements\n");
  for (int i = 0; i < size; i++)
  {
    printf(" %d", arr[i]);
  }

  free(arr);
  arr = NULL;

  return 0;
}