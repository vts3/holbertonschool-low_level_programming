#include "main.h"
/**
 *swap_int - swapping values
 *@a: values of a to b
 *@b: values of b to a
 *Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
