#include "holberton.h"
/**
 *print_rev - prints a string in reverse
 *@s: takes pointer to a string
 *Return: void
 */
void print_rev(char *s)
{
	int i;
	char c;
	int j;

	i = 0;
	c = s[0];
	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
