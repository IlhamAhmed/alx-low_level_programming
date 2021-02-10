#include "holberton.h"
/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 * void: don't take any parameter
 */
void print_alphabet_x10(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count++;
	}
}
