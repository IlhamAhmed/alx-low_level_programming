#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *@s: takes char parameter
 *Return: int
 */
int _strlen(char *s)
{
	int i;
	char c;

	i = 0;
	c = *s;
	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}
