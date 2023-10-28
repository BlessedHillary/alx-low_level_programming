#include "main.h"


/**
 * _strncpy - coppsjmdhhccgk
 * of bjkdsipiscipi dsikcsns dsinisc
 * @dest: Ther cjds siisn dsisd
 * @src: The nj jdkn
 * @n: The vhxzjk xkmzx cjzxn
 * Return: A dkidm xks
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
