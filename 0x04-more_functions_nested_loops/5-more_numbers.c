#include "holberton.h"
/**
 *more_numbers - prints more numers
 *void: takes no parameter
 *Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 != 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
