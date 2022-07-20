include(stdio.h)
/**
 * main - looking for sizes
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	char charType;
	int intType;
	long int longintzType;
	long long int longlongint;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}