#include "holberton.h"
/**
 **_strcpy - copies a string
 *@dest: takes astring
 *@src: takes the source string
 *Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l;
	char c;

	l = 0;
	c = src[0];
	while (c != '\0')
	{
		l++;
		c = src[l];
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
