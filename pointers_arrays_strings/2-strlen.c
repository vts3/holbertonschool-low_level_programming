#include "main.h"
/**
 *_strlen - the length of a string
 *@s: the string
 *Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
