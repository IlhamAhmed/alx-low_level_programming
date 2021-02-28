#include "holberton.h"
/**
 **_memcpy - copies memory area
 *@dest: takes a string to copy to
 *@src: takes a string to copy from
 *@n: takes no of bytes to be filled
 *Return: a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
