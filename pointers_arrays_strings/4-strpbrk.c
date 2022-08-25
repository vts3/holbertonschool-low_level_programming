#include "main.h"
/**
*_strpbrk - length of a prefix substring
*@s: string
*@accept: stack memory
*Return: null
*/

char *_strpbrk(char *s, char *accept)
{

	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
