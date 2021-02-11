#include "holberton.h"
/**
 *print_square - prints a square
 *@size: takes int
 *Return: nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
