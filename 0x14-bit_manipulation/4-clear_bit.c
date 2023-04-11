#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a particular index.
 * @n: num  of m
 * @idx: starting from 0 of the bit selected to set
 * Return: 1 on success,  or -1 if any error
 */

int clear_bit(unsigned long int *n, unsigned int idx)
{
	unsigned long int m;

	if (idx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	m = ~(1 << idx);
	*n = *n & m;

	return (1);
}

