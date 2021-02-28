#include "holberton.h"
#include <stdio.h>
/**
 *main - prints the program name
 *@argc: takes the number of lines
 *@argv: array of strings
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
