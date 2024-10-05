// DMOJ problem wc15c2j1, A New Hope

#include <stdio.h>

int main()
{

int input;
int i = 0;

scanf("%d", &input);

printf("A long time ago in a galaxy ");
while (i < input - 1)
{
  printf("far, ");
  ++i;
}

printf("far away...");

  return 0;
}