#include <stdio.h>

/**
 * main - putchar numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;
		for (num = 0; num <= 9; ++num)
		{
		putchar(num + '0');
		}
		putchar('\n');
		return (0);
}
