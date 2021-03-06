#include "holberton.h"
/**
 *is_palindrome - checks if a string is palindrome or not
 *@s: takes a string
 *Return: 1 if it is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (is_pal(s, 0, _strlen_recursion(s) - 1));
}
/**
 *is_pal - a helper method for is_palindrome
 *@s: takes the string
 *@i: takes the index of the first letter
 *@j: takes the index of the last letter
 *Return: int
 */
int is_pal(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return (0);
	}
	else if (i >= j)
	{
		return (1);
	}
	else
	{
		return (is_pal(s, i + 1, j - 1));
	}
}
/**
 *_strlen_recursion - returns the lenght of a string
 *@s: the string
 *Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
