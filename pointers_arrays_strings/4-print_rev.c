#include "main.h"
/**
 *print_rev - printing in reverse
 *@s: string in reverse
 *Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
		i--;
	for (; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
