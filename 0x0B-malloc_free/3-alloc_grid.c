#include "holberton.h"
#include <stdlib.h>
/**
***alloc_grid - creates a 2D array of integers
*@width: takes the width
*@height: takes the length
*Return: a pointer to the array
*/
int **alloc_grid(int width, int height)
{
	int w = 0, h = 0;
	int **g;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	g = malloc(sizeof(int *) * height);
	for (; h < height; h++)
	{
		g[h] = malloc(sizeof(int) * width);
	}
	if (g == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		if (g[h] == NULL)
		{
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (; w < width; w++)
		{
			g[h][w] = 0;
		}
	}
	return (g);
}
