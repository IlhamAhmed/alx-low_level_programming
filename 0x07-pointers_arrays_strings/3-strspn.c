#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: takes a string
 *@accept: takes another rstring
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			if (!accept[j + 1])
			{
				return (count);
			}
		}
	}
	return (count);
}
