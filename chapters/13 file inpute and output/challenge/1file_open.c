#include <stdio.h>

int main()
{
  char filename[100];
  printf("file opening tool\n");
  printf("enter the file name: ");
  scanf("%99s", filename);

  FILE *file;

  file = fopen(filename, "r");
  if (file != NULL)
  {
    printf("%s was opened successfully\n", filename);
    fclose(file);
  }
  else
  {
    printf("file was not found\n");
  }

  return 0;
}