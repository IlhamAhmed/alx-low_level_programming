#include "holberton.h"
/**
 *print_sign - prints the sign of a number
 *@n: takes int parameter
 *Return: 1 if the number is positive, -1 if negative and 0 if zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
