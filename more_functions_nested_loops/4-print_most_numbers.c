#include "main.h"
/**
 *print_most_numbers - print all numbers except 2 & 4
 *
 *Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int numbers;
		for (numbers = '0'; numbers <= '9'; ++numbers)
			if (numbers != '2' && numbers != '4')
			{
			_putchar(numbers);
			}
		_putchar('\n');
}
