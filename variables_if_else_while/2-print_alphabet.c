#include <stdio.h>

/**
 * main - printing the whole alphabet in lower cases
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char az;
		for (az = 'a'; az <= 'z'; ++az)
			putchar(az);
		putchar('\n');
		return (0);
}
