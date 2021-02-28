#include "holberton.h"
/**
 *_abs - computes absolute value of an integer
 *@x: takes int parameter
 *Return: absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else if (x > 0)
	{
		return (x);
	}
	else
	{
		return (0);
	}
}
