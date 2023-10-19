#include "main.h"
#include <stdio.h>

/**
 * _strcat - Con fjjfh f jduud dd
 * @dest: The fdjjd xjjxz k
 * @src: The chdid sjs djs
 * Return: A ps shhdb  csl
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
	dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
