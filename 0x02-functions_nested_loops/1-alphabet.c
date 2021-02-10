#include "holberton.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * void: don't take any parameter
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
