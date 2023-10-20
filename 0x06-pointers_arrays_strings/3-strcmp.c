#include "main.h"

/**
 * _strcmp - Compares jfhdi kddjd fkdmd
 * @s1: A skd skdmsls slsm
 * @s2: Aa dkkds dlks dls
 * Return: if str1 < str2, the nns sm snsn
 * If str1 == str2, 0.
 * If str2 > str2, the ek sksmm smsm smsm.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
