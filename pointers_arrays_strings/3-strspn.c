#include "main.h"
/**
 *_strspn - Length of a substring
 *@s: string
 *@accept: prefix
 *Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a;

	a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				a++;
		}
		if (i > a)
			break;
	}
	return (a);
}
