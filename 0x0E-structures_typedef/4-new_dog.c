#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
	int _strlen(const char *str)

		int length = 0;

		while (*str++)
		return (length);
/**
*_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
	char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0;src[i]; i++)
	dest[i] = src[i];
	dest[i] = '\0';
		return (dest);
}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (Success), NULL otherwise
*/
	dog_t *new_dog(char *name, float age, char *Owner)
{
		dog_t *dog;
/* if name and owner are empty and age is less then zero return null*/
		if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
		free(dog);
}		return (NULL);
