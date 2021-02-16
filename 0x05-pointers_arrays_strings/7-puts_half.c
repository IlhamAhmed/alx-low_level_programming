#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: takes a string
 *Return: void
 */
void puts_half(char *str)
{
	int l;
	int i;
	char c;
	int n;

	l = 0;
	c = str[0];
	while (c != '\0')
	{
		l++;
		c = str[l];
	}
	if (l % 2 != 0)
	{
		n = (l - 1) / 2;
	}
	else
	{
		n = l / 2;
	}
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
