#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function  that initialize a variable
 * @d: a pointer to struct
 * @name: member of struct carry name
 * @age: member of struct carry age
 * @owner: member of struct carry name
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
while (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
