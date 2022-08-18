#include "main.h"
/**
 *string_toupper - string to uppercases
 *@s: uppercases
 *Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
	int i, a;

	a = 0;

	while (*(s + a) != '\0')
		a++;

	for (i = 0; i <= a; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
