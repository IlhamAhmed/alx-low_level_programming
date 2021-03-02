#include "holberton.h"
#include <stdlib.h>
/**
 **_strdup - returns a pointer to a copy of a string
 *@str: takes the string
 *Return: a pointer to char
 */
char *_strdup(char *str)
{
	char *st;
	int i = 0;
	int size = _strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	st = malloc(sizeof(char) * size);
	if (st == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		st[i] = str[i];
		i++;
	}
	return (st);
}
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
