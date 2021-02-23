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
	int i;
	char *p;

	i = 0;
	p = s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (p);
		}
		p++;
		i++;
	}
	return (NULL);
}
