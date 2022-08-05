#include <stdio.h>
#include "main.h"

/**
 * main - printing to 100 w/ fizz buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)

			printf("FizzBuzz");

		else if (num % 3 == 0)

			printf("Fizz");

		else if (num % 5 == 0)

			printf("Buzz");

		else

			printf("%d", num);


		if (num != 100)

		printf(" ");
		num++;

	}
	printf("\n");
	return (0);
}
