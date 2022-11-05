#include "main.h"
/**
 * set_bit -  sets the value of a bit to
 * 1 at a given index
 * @n: long integer number
 * @index: position to be set
 *
 * Return: 1 if it works, -1 if its an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitval = 1;

	if (index > 32)
	{
		return (-1);
	}

	bitval = bitval << index;
	*n = *n | bitval;

	return (1);
}
