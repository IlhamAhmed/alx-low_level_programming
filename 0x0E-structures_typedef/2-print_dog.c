#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog
 *@d: takes the struct
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	if (d->age >= 0)
	{
		printf("Age: %.6f\n", d->age);
	}
	else
	{
		printf("Age: %s\n", "(nil)");
	}
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
