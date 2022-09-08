#include "main.h"
/**
 * _strdup - returns a pointer
 * @str: copy string
 * Return: 0
 */

char *_strdup(char *str)
{
	int lenght;
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	lenght = strlen(str);
	copy = malloc(sizeof(char) * lenght + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
