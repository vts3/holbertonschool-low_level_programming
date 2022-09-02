#include "main.h"
/**
 *_islower - return 1 if lowercases
 *@c: lowercases
 *Return: Aways 0 (Success)
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
