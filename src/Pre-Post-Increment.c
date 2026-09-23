#include <stdio.h>
int i = 0;

int main(void)
{

  // Demo Pre-Post incrementation:
  // Sources:
  // https://www.geeksforgeeks.org/cpp/pre-increment-and-post-increment-in-c/

  /* DELETE to run "PRE incrementation"
  // Pre incrementation adds to the variable before variable is used
  while (i < 5)
  {
    ++i;
    printf("%d\n", i);
  }
  */

  /* DELETE to run "POST incrementation"
  // Post incrementation adds to the variable after variable is used
  while (i < 5)
  {
    printf("%d\n", i);
    i++;
  }
  */
  return 0;
}
