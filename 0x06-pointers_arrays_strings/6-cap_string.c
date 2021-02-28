#include "holberton.h"
/**
 **cap_string - capitalizes all words of a string
 *@s: takes a pointer to string
 *Return: char
 */
char *cap_string(char *s)
{
	int i;
	int j;

	i = 0;
	j = i - 1;
	while (s[i] != '\0')
	{
		if (s[j] == 32 || s[i] == 44 || s[i
