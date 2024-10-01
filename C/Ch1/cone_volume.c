// DMOPC '14 Contest 5 P1 - Core Drill
// DMOJ problem dmopc14c5p1

#include <stdio.h>

int main()
{
  const double PI = 3.141592653589793;

  int radius;
  int height;

  scanf("%d\n%d", &radius, &height);

  double result = (PI * (radius * radius) * height) / 3;

  printf("%lf", result);
}