#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: var of type struct dog
 * @name: pet name's
 * @age: pet age's
 * @owner: owner name
 * Return: Always 0 (succes)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d.(name)  = name;
		d.(age)   = age;
		d.(owner) = owner;
	}
}

