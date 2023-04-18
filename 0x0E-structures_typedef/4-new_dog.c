#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
* @str: the string to get the length
*
* Return: length of @str
*/
int _strlen(const char *str)
{
		int length = 0;

		while (*str++)
			length++;
		return (length);
}

/**
*_strcpy - a function that returns @dest with a copy of a string from @src
*
* @src: string to copy
* @dest: copy string to here
*
* Return: @dest
*/

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @Owner: Owner of the dog
*
* Return: pointer to the new dog (Success), NULL otherwise
*/

dog_t *new_dog(char *name, float age, char *Owner)
{
	dog_t *dog;

	/* if name and Owner are empty and age is less then zero return null*/
		if (!name || age < 0 || !Owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
		free(dog);
	return (NULL);
}
