#include "holberton.h"
/**
 *print_triangle - print a triangle
 *@size: takes int
 *Return: nothing
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;
		int k;

		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k > 0; k--)
			{
				_putchar(32);
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
