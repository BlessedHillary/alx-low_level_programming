#include "main.h"

/**
 * _strncat - Cond jddjd disisjs dk
 * an dj ssjska akq ama
 * @dest: The string wkaka.
 * @src: The shhs aak
 * @n: thnsaa akak akaa akakndx xswikwx
 * Return: A pointer dnxoucs cscn.
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
