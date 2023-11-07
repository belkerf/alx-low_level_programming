#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d : the variable we want to initialize
 * @name : the first part of d
 * @age : the second part of d
 * @owner : the third part
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
