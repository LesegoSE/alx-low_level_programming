#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: parameter variable
 * @age: parameter variable
 * @owner: parameter variable
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n;
	int f;
	int c;

	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (n = 0; name[n]; n++)
		;
	for (f = 0; owner[f]; f++)
		;
	p->name = malloc(n + 1);
	p->owner = malloc(f + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (c = 0; c < n; c++)
	{
		p->name[c] = name[c];
	}
	p->name[c] = '\0';
	for (c = 0; c < f; c++)
	{
		p->owner[c] = owner[c];
	}
	p->owner[c] = '\0';
	p->age = age;
	return (p);
}
