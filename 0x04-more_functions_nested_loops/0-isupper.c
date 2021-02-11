#include "holberton.h"
/**
 * _isupper - checks whether a character is upper case or not
 * @c: takes int parameter
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
