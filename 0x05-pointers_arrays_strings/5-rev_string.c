#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: takes pointer to char
 *Return: void
 */
void rev_string(char *s)
{
	int i;
	int l;
	char c;
	int j;

	l = 0;
	c = s[0];
	while (c != '\0')
	{
		l++;
		c = s[l];
	}
	j = l;
	for (i = 0; i <= j / 2; i++)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		l--;
	}
	s[j + 1] = '\0';
}
