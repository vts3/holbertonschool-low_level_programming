#include "main.h"
/**
 *_isdigit - checking for digit 0 - 9
 *@c: return 1 if digit, 0 if else
 *Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
