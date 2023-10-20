#include "main.h"

/**
 * string_toupper - Changes wk wkwk wi2
 * of a string to uppercase
 * @str: The djmsskska amaka
 * Return: A pointer dss sffd.
 *
 */

char *string_toupper(char *str)

{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
