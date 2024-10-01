// DMOPC '15 Contest 7 P2 - Not a Wall of Text
// DMOJ problem dmopc15c7p2

#include <stdio.h>

int python_length(char arr[]);

int main()
{

  char line[80]; // Max input is only 80 characters.
  int i;
  int count = 0;

  fgets(line, sizeof(line), stdin);

  int actual_size = python_length(line);

  for (i = 0; i < actual_size; ++i)
  {
    if (line[i] == ' ')
    {
      count++;
    }
  }
  count++;
  printf("Word Count: %d\n", count);

  return 0;
}

// Gets the Length of an array similar to python len() function
int python_length(char arr[])
{
  int i;
  for (i = 0; arr[i]; ++i)
    ;
  return i;
}