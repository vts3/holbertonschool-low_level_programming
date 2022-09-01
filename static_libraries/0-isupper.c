#include "main.h"
/**
 *_isupper - Returning 1 if is upper cases
 *@c: if is 0 or 1
 *Return: Always 0 (Success)
 */

int _isupper(int c)
{

		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
			return (0);
}
