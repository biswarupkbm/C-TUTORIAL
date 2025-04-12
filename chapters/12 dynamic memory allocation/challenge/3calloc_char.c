#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Dynamic charactors\n");
  char *sentense = (char *)calloc(100, sizeof(char));
  if (sentense == NULL)
  {
    printf("memory was not allocated");
    return 1;
  }

  printf("ensuring all elements are initialized\n");
  for (int i = 0; i < 100; i++)
  {
    printf(" %c", sentense[i]);
  }

  printf("\nenter the piece of text: ");
  fgets(sentense, 100, stdin);
  printf("Here is your text: %s", sentense);

  free(sentense);
  sentense = NULL;

  return 0;
}