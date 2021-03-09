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
	char *new_name;
	char *new_owner;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
	{
		return (NULL);
	}
	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dogg);
		return (NULL);
	}
	new_name = _strcpy(new_name, name);
	new_owner = _strcpy(new_owner, owner);
	dogg->name = new_name;
	dogg->age = age;
	dogg->owner = new_owner;
	return (dogg);
}
/**
 *_strlen - returns the length of a string
 *@s: takes char parameter
 *Return: int
 */
int _strlen(char *s)
{
	int i;
	char c;

	i = 0;
	c = *s;
	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}
/**
 **_strcpy - copies a string
 *@dest: takes astring
 *@src: takes the source string
 *Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l;
	char c;

	l = 0;
	c = src[0];
	while (c != '\0')
	{
		l++;
		c = src[l];
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
