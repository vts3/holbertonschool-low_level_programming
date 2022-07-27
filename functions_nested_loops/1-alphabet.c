#include "main.h"
/**
 * print_alphabet - printing the whole alphabet in lower cases
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	char az;
		for (az = 'a'; az <= 'z'; ++az)
			_putchar(az);
		_putchar('\n');
}
