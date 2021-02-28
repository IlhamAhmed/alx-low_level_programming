#include "holberton.h"
/**
 **_strncat - concatenates two fuctions
 *@dest: takes a string
 *@src: taes another string
 *@n: takes int
 *Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = strLen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/**
 *strLen - finds length of a string
 *@c: takes a string
 *Return: int
 */
int strLen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
