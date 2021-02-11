#include "holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: takes int as a parameter
 * Return: 1 if it is and 0 if it is not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
