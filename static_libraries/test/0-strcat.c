#include "main.h"
/**
 **_strcat - combinning two strings
 *@dest: 1st letter 1st string
 *@src: 1st lettrer 2nd string
 *Return: dest
 */

char *_strcat(char *dest, char *src)

{
	char *s1 = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (s1);
}
