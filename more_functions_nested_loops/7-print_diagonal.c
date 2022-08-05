#include "main.h"
/**
 *print_diagonal - printing diagonal lines
 *@n: dline \
 *Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int dline, j;

	if (n > 0)
	{
		for (dline = 0; dline < n; dline++)
		{
			for (j = 0; j < dline; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
