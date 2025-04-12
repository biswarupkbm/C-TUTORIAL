#include <stdio.h>

int main()
{
  FILE *file_pointer;
  char text[100];

  file_pointer = fopen("kbm.text", "r");

  if (file_pointer == NULL)
  {
    printf("\nfile couldn't be opened");
    return 1;
  }

  // reading line by line of file
  fgets(text, 100, file_pointer);
  printf("\n %s", text);

  // reading whole file
  char c;
  do
  {
    c = fgetc(file_pointer);
    printf("%c", c);
  } while (c != EOF);

  int result = fclose(file_pointer);
  if (result == 0)
  {
    file_pointer = NULL;
  }
  else
  {
    printf("\nfile was not closed");
  }
  return 0;
}