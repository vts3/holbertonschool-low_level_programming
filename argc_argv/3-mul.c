#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply
 *@argc: Start
 *@argv: num of args
 *Return: i
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		i = 1;
	}
	return (i);
}
