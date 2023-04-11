#include "main.h"

/**
 * set_bit - the value of a given index.
 * @idx: starting from zero offset, of the bit you want to set
 * @n: pointer number of m
 * Return: 1 if successful, or -1 if there was an error
 */

int set_bit(unsigned long int *n, unsigned int idx)
{
	unsigned long int m;

	if (idx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	m = 1 << idx;
	*n = *n | m;

	return (1);
}
