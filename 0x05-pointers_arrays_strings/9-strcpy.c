#include "main.h"

/**
 * _strcpy - Copy a sting
 * @dest: Destination value
 * @src: Souuvd
 * Return: then dncjss
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
	dest[i++] = '\0';
	}
	dest[i++] = '\0';
	return (dest);
}
