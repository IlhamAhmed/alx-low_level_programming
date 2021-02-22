#include "holberton.h"
#define NULL 0
/**
 **_strchr - locates a character in a string
 *@s: takes a string
 *@c: takes a character
 *Return: the character if found and null if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
