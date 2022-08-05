#include "main.h"
/**
 *print_line - Printing lines
 *@n: lines
 *Return: Always 0 (Success)
 */

void print_line(int n)
{
	int line;
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
