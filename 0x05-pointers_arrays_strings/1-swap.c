#include "holberton.h"
/**
 *swap_int - swaps the values of two integers)
 *@a: int parameter pointer
 *@b: pointer to int
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
