#include "main.h"
/**
 *_puts - puts string
 *@s: String
 *Return: Always 0 (Succes)
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		printf("%s\n", s);
		break;
	}
}
