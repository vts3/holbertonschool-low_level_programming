#include "main.h"
/**
 *_strchr - locates character in a string
 *@s: Pointer of a string
 *@c: charcter
 *Return: c or null
 */

char *_strchr(char *s, char c)
{
	int i, j;

	j = 0;

	while (*(s + j) != '\0')
		j++;

	for (i = 0; i <= j; i++, s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
