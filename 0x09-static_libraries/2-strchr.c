#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry xx k
 * @s: inpdns
 * @c: icn xzj
 * Return: aka kas 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
