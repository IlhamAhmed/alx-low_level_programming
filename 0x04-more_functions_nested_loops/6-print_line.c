#include "holberton.h"
/**
 *print_line - prints a straight line
 *@n: takes int
 *Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <=  n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
