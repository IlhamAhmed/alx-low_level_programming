#include "holberton.h"
#include <stdio.h>
/**
 *main - prints the program name
 *@argc: takes the number of lines
 *@argv: array of strings
 *Return: zero
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
