#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers
 *@argc: takes the number of lines
 *@argv: array of strings
 *Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc <= 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		int sum = 0;
		int i = 1;

		while (i < argc)
		{
			if (!isdigit(atoi(argv[i])))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				sum+= atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return;
	}
}
