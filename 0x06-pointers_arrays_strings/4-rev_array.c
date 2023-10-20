#include "main.h"

/**
 * reverse_array - Reverses smms sms sm
 * @a: The array of dnsn snsm anam
 * @n: The num wmsms smms sm
 *
 */

void reverse_array(int *a, int n)

{

	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
