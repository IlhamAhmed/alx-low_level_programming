#include "holberton.h"
#include <stdlib.h>
/**
 **str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1, size2, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2) + 1;
	s = malloc(sizeof(char) * (size1 + size2));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < size2 + size1)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
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
