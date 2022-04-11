#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: dog struct
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (!(*d).name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);

	if (!(*d).age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);

	if (!(*d).owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);

}
