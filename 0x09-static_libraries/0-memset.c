#include "main.h"

/**
 * _memset - Entry point
 * @s: podsnnx
 * @b: diicsm skos
 * @n: cncs
 * Return: Al fscvoi 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
