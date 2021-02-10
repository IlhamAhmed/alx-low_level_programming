#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character
 * @c: takes an int parameter
 *Return: 1 if it is a letter and 0 if it is not
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
