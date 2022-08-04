#include "main.h"
/**
 *print_numbers - printing numbers
 *
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int numbers;
		for (numbers = '0'; numbers <= '9'; ++numbers)
		{
			_putchar(numbers);
		}
			_putchar('\n');
}
