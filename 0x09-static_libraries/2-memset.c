#include <unistd.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

