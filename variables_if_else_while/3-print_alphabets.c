#include <stdio.h>

/**
 * main - printing the whole alphabet in upper and lower cases
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char az, AZ;
		for (az = 'a'; az <= 'z'; ++az)
		{
			putchar(az);
		}
		for (AZ = 'A'; AZ <= 'Z'; ++AZ)
		{
			putchar(AZ);
		}
		putchar('\n');
		return (0);
}
