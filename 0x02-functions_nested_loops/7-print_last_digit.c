#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@x: takes an int
 *Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;
	return (last);
}
