#include <stdio.h>
#include <string.h>

int main()
{

  FILE *file = fopen("4user_input.text", "w");
  if (file == NULL)
  {
    printf("Error while opening file");
    return 1;
  }

  char input[100];
  while (1)
  {
    printf("enter your text to be written to file: ");
    fgets(input, 100, stdin);
    if (strcmp(input, "exit\n") == 0)
      break;
    fputs(input, file);
  }

  fclose(file);
  file = NULL;

  return 0;
}