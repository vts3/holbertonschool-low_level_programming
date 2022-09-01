#include "main.h"
/**
 *_abs - absulut value of an interger
 *@n: absolut value
 *Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n * 1);
	}
}
