#include "holberton.h"
/**
 * *_memset - fills memory with constant byte.
 *@s: takes string
 *@b: takes char
 *@n: takes unsigned int
 *Return: a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
