#include <stdio.h>
/**
 *main - prints lower case alphabets in reverse order
 *Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
