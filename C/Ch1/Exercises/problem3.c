// DMOJ problem ccc13j1, Next in Line

#include <stdio.h>

int main()
{
  int y;
  int m;

  scanf("%d %d" , &y , &m);

  printf("%d", m + ( m - y ));

  return 0;
}