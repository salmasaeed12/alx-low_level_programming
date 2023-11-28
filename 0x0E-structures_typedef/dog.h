#ifndef DOG_H
#define DOG_H
#include<stdlib.h>
#include<stdio.h>
/**
 * struct dog - a tempelet for dog info
 * @name:  member of struct
 * @age:  member of struct
 * @owner:  member of struct
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
