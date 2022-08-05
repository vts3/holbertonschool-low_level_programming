#include "main.h"
/**
 *more_numbers - Printing till 14
 *
 *Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int numbers;
	int time;

	for (time = 1; time <= 10; time++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
