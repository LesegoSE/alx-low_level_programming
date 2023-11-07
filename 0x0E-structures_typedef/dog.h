#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  initialize a variable of type struct dog
 * @name: parameter variable
 * @age: parameter variable
 * @owner: parameter variable
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
