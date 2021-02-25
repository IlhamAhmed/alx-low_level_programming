#include "holberton.h"
/**
 *_sqrt_recursion - returns the natural square root of n
 *@n: takes an int
 *Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (square_root(n, 2));
}
/**
 *square_root - a helper method to find a sqrt
 *@n: takes the number
 *@i: takes a number for guess
 *Return: the square root if found or -1 if not
 */
int square_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (square_root(n, i + 1));
}
