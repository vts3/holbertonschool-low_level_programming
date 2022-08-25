#include "main.h"
/**
 **_memcpy - copies memory areas
 *@dest: copy destiny
 *@src: source of the copy
 *@n: unsigned int
 *return: dest
 */

char *_memcpy(char *dest, char  *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
