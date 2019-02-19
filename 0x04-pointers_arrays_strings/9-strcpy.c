#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest. StrCpy
 * @dest: pointer to an char
 * @src: pointer to an char
 *
 * Return: the destination
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* add '\0' at the end */
	return (start);
}
