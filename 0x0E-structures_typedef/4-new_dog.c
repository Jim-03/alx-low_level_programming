#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - checks length of string
 * @c: the string
 * Return: the length
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}

/**
 * *_strcpy - function to copy string
 * @dest: copied string
 * @src: string tobe copied
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (*(src + n) != '\0')
	{
		n++;
	}
	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: its name
 * @age: its age
 * @owner: the onwer
 * Return: NULL or pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;
	int dog_name, new_owner;

	dog_name = _strlen(name);
	new_owner = _strlen(owner);

	new_Dog = malloc(sizeof(dog_t));

	if (new_Dog == NULL)
		return (NULL);

	new_Dog->name = malloc(sizeof(char) * (dog_name + 1));
	new_Dog->owner = malloc(sizeof(char) * (new_owner + 1));
	new_Dog->age = age;

	if (new_Dog->name == NULL || new_Dog->owner == NULL)
		return (NULL);

	_strcpy(new_Dog->name, name);
	_strcpy(new_Dog->owner, owner);

	return (new_Dog);
}
