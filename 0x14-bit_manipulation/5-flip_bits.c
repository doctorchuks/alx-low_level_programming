#include "main.h"

/**
 * flip_bits - flip from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, res;
	unsigned int d, i;

	d = 0;
	res = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (d & res))
			d++;
		res <<= 1;
	}

	return (d);
}
