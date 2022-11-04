/* 
 * File: dog.h
 * Auth: Fco Hdz
 */

#ifndef DOGH
#define DOGH

/**
 * struct dog - dog structure
 *
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - typedef struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog_t
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

