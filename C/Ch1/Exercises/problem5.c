// DDMOJ problem wc18c3j1, An Honest Day’s Work

#include <stdio.h>

int main()
{
  int total_paint;
  int paint_per_cap;
  int price_per_cap;

  scanf("%d %d %d", &total_paint, &paint_per_cap, &price_per_cap);

  int covered_caps = total_paint / paint_per_cap;

  int remaining_paint = total_paint % paint_per_cap;

  printf("%d", (covered_caps * price_per_cap) + (remaining_paint));


  return 0;
}