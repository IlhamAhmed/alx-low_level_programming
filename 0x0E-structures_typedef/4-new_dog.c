#include "dog.h"
#include <stdlib.h>
/**
 **new_dog - creates a new dog
 *@name: name
 *@age: age
 *@owner: owner
 *Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
	{
		return (NULL);
	}
	dogg->name = name;
	dogg->age = age;
	dogg->owner = owner;
	return (dogg);
}
