#include "holberton.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: takes it parameter
 *Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
