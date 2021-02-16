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
	while (s[l] != '\0')
	{
		l++;
	}
	j = l - 1;
	for (i = 0; i < j; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j--;
	}
}
