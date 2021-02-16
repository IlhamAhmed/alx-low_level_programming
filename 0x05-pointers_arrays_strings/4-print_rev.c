#include "holberton.h"
/**
 *print_rev - prints a string in reverse
 *@s: takes pointer to a string
 *Return: void
 */
void print_rev(char *s)
{
	int i;
	char *c;
	int j;

	i = 0;
	c = s;
	while (c != '\0')
	{
		i++;
		c++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(*c);
		c--;
	}
	_putchar('\n');
}
