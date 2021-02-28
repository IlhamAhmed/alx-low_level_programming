#include "holberton.h"
/**
 **_strcat - concatenates two strings
 *@dest: takes a string
 *@src: takes another string
 *Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	int len2;

	len2 = 0;
	len = 0;
	for (i = 0; i < len2; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
