#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len - finds the lenght of a string
 * @str: the string
 * Return: the lenght
 */
int len(char *str)
{
	int i;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
		l++;
	return (l);
}
/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		--n;
	}
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dogs age
 * @owner: dogs owner
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *cpname, *cpowner;
	int len_name, len_owner;

	len_name = len(name);
	len_owner = len(owner);
	cpname = malloc(len_name + 1);
	if (cpname == NULL)
		return (NULL);
	cpowner = malloc(len_owner + 1);
	if (cpowner == NULL)
	{	free(cpname);
		return (NULL);
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	_memcpy(cpname, name, len_name + 1);
	_memcpy(cpowner, owner, len_owner + 1);
	newdog->name = cpname;
	newdog->owner = cpowner;
	newdog->age = age;
	return (newdog);
}
