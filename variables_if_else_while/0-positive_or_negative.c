#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printing if the numbrer is positive or negative
 *
 *Return: Always 0 (Success)
 */

      int main(void)
  {
	    int n;

	    srand(time(0));
	    n = rand() - RAND_MAX / 2;

      if (n >= 1)
      {
        printf("%d is positve\n", n);
      }

      if (n == 0)
      {
        printf("%d is cero\n", n);
      }

      if (n < 0)
      {
        printf("%d is negative\n", n);
      }

	    return (0);
  }
