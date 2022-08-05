#include "main.h"
/**
 *print_square - printing #
 *@size: size of the square
 *Return: Always 0 (Success)
 */

void print_square(int size)
{
	int square, j;

	if (size > 0)
	{
		for (square = 0; square < size; square++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
