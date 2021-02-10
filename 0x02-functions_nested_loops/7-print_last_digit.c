#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@x: takes an int
 *Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		y = y * -1;
	}
	_putchar('0' + y);
	return (y);
}
