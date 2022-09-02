#include "main.h"
/**
 **_memset - memory with a constant byte
 *@s: pointer
 *@b: character
 *@n: unsigned int
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
