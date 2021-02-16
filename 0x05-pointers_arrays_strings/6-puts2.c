#include "holberton.h"
/**
 *puts2 - prints every other character of astring
 *@str: prints every other character
 *Return: void
 */
void puts2(char *str)
{
	int i;
	char c;
	int j;

	i = 0;
	c = str[0];
	while (c != '\0')
	{
		i++;
		c = str[i];
	}
	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar(10);
}
