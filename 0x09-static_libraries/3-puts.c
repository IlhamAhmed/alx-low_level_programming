#include "holberton.h"
/**
 *_puts - prints a string
 *@str: takes a pointer to a char
 *Return: void
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	c = *str;
	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
