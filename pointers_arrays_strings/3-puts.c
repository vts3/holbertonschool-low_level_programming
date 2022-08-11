#include "main.h"
/**
 *_puts - puts string
 *@str: String
 *Return: Always 0 (Succes)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%s\n", str);
		break;
	}
}
