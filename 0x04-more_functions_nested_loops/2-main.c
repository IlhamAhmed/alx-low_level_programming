#include "holberton.h"
#include <stdio.h>
int main(void)
{
	int p;

	p = mul(98, 1024);
	printf("%d\n", p);
	p = mul(-402, 4096);
	printf("%d\n", p);
	return (0);
}
