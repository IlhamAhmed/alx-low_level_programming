#ifndef DOG_H
#define DOG_H
int _putchar(char c);

/**
 * struct dog - it is a struct called dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Description: This struct defines a type called dof
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
