#include "holberton.h"
#define NULL 0
#include <stdlib.h>
/**
 **create_array - creates an array of chars and initialize with specific char
 *@size: takes the size
 *@c: takes the character
 *Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
