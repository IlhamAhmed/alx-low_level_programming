#include "holberton.h"
/**
 * _islower - checks if a letter is in lowercase
 * @c: takes int  as parameter
 *Return: 1 if it is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
