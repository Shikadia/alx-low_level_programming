#include "dog.h"
#include <stdlib.h>

int str_len(char *src);
char *str_cpy(char *copy, char *src);

/**
* str_len - Gets the length of a string @str
* @src: The string to get the length
* Return: returns len of the source string
*/
int str_len(char *src)
{
	int len = 0;

	if (src == NULL)
		return (0);
	while (*src != '\0')
	{
		len++;
		src++;
	}
	return (len + 1);
}

/**
* str_cpy - Copies the content of src to dest
* @copy: The destination buffer
* @src: The source to copy from
* Return: returns the copied string
*/
char *str_cpy(char *copy, char *src)
{
	int i;

	if (!copy || !src)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	
	}
	copy[i] = '\0';

	return (copy);
}

/**
* new_dog - A new object for the structure dog_t
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of teh dog
* Return: returns pointer to a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rt_dog;

	rt_dog = malloc(sizeof(*rt_dog));

	if (!rt_dog)
		return (NULL);

	rt_dog->name = malloc(sizeof(*name) * (str_len(name)));
	rt_dog->owner = malloc(sizeof(*owner) * (str_len(owner)));

	if (!(rt_dog->name) || !(rt_dog->owner))
	{
		free(rt_dog->name);
		free(rt_dog->owner);
		free(rt_dog);
		return (NULL);
	}
	rt_dog->name = str_cpy(rt_dog->name, name);
	rt_dog->age = age;
	rt_dog->owner = str_cpy(rt_dog->owner, owner);

	return (rt_dog);
}
