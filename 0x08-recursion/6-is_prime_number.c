#include "holberton.h"
/**
 *is_prime_number - checks if a number is prime
 *@n: takes an int
 *Return: 1 is the number is prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime(n, 2));
}
/**
 *is_prime - is a helper method
 *@n: takes the number
 *@i: takes the starting point
 *Return: 1 or 0
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == n - 1)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, i + 1));
	}
}
