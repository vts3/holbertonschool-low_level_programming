#include "main.h"
/**
 **_strncat - combine string with letter
 *@dest: 1st string
 *@src: Only 1st letter of 2nd string
 *@n: int
 *Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)

{
	char *s1 = dest;

	while (*dest)
	{
		dest++;
	}

	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			src++;
			dest++;
		}
		else
			break;
	}
	return (s1);
}
