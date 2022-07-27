#include "main.h"
/**
 * print_alphabet_x10 - printing the whole alphabet in lower cases 10x
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char az;
	int time = 10;

		for (time = '0'; time <= '9'; time++)
		{
			for (az = 'a'; az <= 'z'; ++az)
			{
				_putchar(az);
			}
				_putchar('\n');
		}
}
