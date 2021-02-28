#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: takes the number of lines
 *@argv: array of strings
 *Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
