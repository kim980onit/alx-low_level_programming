#include "dog.h"


/**
* init_dog - function that initializes a structure of type dog
* @d:parameter1 for the pointer to structer
* @name: parameter2 for the pointer to the name of the dog
* @age:parameter3 for the age of dog
* @owner: parameter4 for the pointer to owner of dog
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
