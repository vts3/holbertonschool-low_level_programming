#include "main.h"
/**
*_strcmp - Entry
*@s1: string 1
*@s2: string 2
*
*Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
		s1++;
		s2++;
	}
		if (*s1 == '\0' && *s2 == '\0')
		return (0);
		else
		return (*s1 - *s2);
}
