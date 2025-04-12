#include <stdio.h>

int main()
{
  const char filename[] = "2read_file.text";

  FILE *file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("file could not be opened");
    return 1;
  }

  int temp;
  int sum = 0;
  int read_status;
  while (fscanf(file, "%d", &temp) == 1)
  {
    sum += temp;
  }

  printf("the sum of all numbers is: %d", sum);

  fclose(file);
  file = NULL;

  return 0;
}