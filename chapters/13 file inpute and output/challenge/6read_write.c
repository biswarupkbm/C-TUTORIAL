#include <stdio.h>
#include <string.h>

int main()
{
  printf("reading and writing\n");
  FILE *file = fopen("6read_write.text", "r+");
  if (file == NULL)
  {
    printf("Error while opening file");
    return 1;
  }

  char buffer[100];
  fgets(buffer, 100, file);
  printf("reading from file I found: %s", buffer);

  fseek(file, 0, SEEK_END);
  fputs("\nThis message was written by program", file);

  fclose(file);
  file = NULL;

  return 0;
}