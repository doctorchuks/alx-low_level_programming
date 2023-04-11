#include "main.h"

/**
 * get_bit - returns the value of a bit found at a given index.
 * @n: checking bits
 * @idx: where to check bit
 *
 * Return: the value of the bit at given idx
 */

int get_bit(unsigned long int n, unsigned int idx)
{
	unsigned long int div, r;

	if (idx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << idx;
	r = n & div;
	if (r == div)
		return (1);

	return (0);
}
