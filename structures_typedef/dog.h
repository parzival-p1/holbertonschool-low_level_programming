#include <stdio.h>
/**
 * struct dog - dog structure
 *
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 * Return: always (0) succes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* 1. Write a function that initialize a variable
 *  of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* 2. Write a function that prints a struct dog */
void print_dog(struct dog *d);

/* 3. Define a new type dog_t as a new name for
 *  the type struct dog.
 */	

/* 4. Write a function that creates a new dog. */
dog_t *new_dog(char *name, float age, char *owner);

/* 5. Write a function that frees dogs. */
void free_dog(dog_t *d);

