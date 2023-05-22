#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - get the length of a string
 * @str: the string to get the length
 *
 * Return: the lentgh of str
 */

int _strlen(char *str)
{
	int length;

	while (*(str + length) != '\0')
		length++;
	return (length);
}
/**
 * _strcopy - function copies the string pointed by source to the distination
 * @src: string to copy
 * @dest: where the string coped
 * Return: string
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct pointer dog NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_dog = (dog_t *) malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*new_dog).owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcopy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcopy(new_dog->owner, owner);

	return (new_dog);
}
