#include "holberton.h"
#define NULL 0
/**
 **_strpbrk - searches a string for any set of byters
 *@s: takes a string to be searched
 *@accept: takes a string containing a set of characters
 *Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	p = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (p);
			}
		}
		p++;
	}
	return (NULL);
}
