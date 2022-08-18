#include "main.h"

/**
 *reverse_array - reverse of an array
 *@a: reverse array
 *@n: numbers of the elements
 *Return: Always 0 (Succes)
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
