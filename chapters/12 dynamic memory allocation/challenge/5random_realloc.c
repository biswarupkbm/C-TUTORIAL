#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("dynamic randoms\n");

  int *arr = (int *)calloc(10, sizeof(int));
  if (arr == NULL)
  {
    printf("Not enough memory");
    return 1;
  }

  srand(time(NULL)); // seeding random generation with time
  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 100; // random numbers with range 0-99
  }
  printf("here are your random numbers: ");
  for (int i = 0; i < 10; i++)
  {
    printf(" %d", arr[i]);
  }

  int *shrinked = (int *)realloc(arr, 5 * sizeof(int));
  if (shrinked == NULL)
  {
    printf("Not enough memory");
    free(arr);
    arr = NULL;
    return 1;
  }
  arr = shrinked;

  printf("\nhere are your random numbers: ");
  for (int i = 0; i < 5; i++)
  {
    printf(" %d", arr[i]);
  }

  free(shrinked);
  shrinked = NULL;

  return 0;
}