#include "main.h"
/**
 *_print_rev_recursion - print
 *@s: string
 *Return: Sucess 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}
	putchar(*s);
}
