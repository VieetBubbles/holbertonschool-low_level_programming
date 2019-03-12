#include "dog.h"
char *_strdup(char *str);
int _strlen(char *str);

/**
 * new_dog - function that creates a new dog;
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new dog struct. Or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ddd;
	char *nameSCpy;
	char *ownerSCpy;

	/* Had help from Marc and Juno for how to use and where to place the strdup */
	/* Dynamically allocate memory for the new struct called ddd */
	ddd = malloc(sizeof(dog_t));
	if (!ddd)
	{
		return (NULL);
	}

	/* Store duplicated string into variable nameSCpy */
	nameSCpy = _strdup(name);
	if (!nameSCpy && name)
	{
		free(ddd);
		return (NULL);
	}

	/* Store other duplicated string into variable ownerSCpy */
	ownerSCpy = _strdup(owner);
	if (!ownerSCpy && owner)
	{
		free(nameSCpy);
		free(ddd);
		return (NULL);
	}

	/* Assign the new string and values to the ned struct caaled ddd */
	ddd->name = nameSCpy;
	ddd->age = age;
	ddd->owner = ownerSCpy;

	return (ddd);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: the string given
 *
 * Return: a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	if (str == 0)
	{
		return (NULL);
	}

	len = _strlen(str);

	ptr = malloc((len + 1) * sizeof(*str));

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - function that gets the lengt of a string
 * @str: the string given
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}
	return (length);
}
