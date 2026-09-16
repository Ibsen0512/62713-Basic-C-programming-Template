#include <stdio.h>

int main(void)
{

  // Demo Arithmetic - Two integers and prints:

  int u, a, t;

  printf("Enter initial velocity, acceleration and elapsed time: num1 num2 num3 \n");
  scanf("%d %d %d", &u, &a, &t);

  printf("initial velocity: u = %d, acceleration: a = %d, elapsed time: t = %d\n", u, a, t);

  int v = u + a * t;
  int s = u * t + (0, 5 * a * t ^ 2);

  printf("final velocity: v = %d\n", v);
  printf("distanse: s = %d", s);

  return 0;
}