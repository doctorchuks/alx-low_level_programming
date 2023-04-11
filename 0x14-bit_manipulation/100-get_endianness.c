#include "main.h"
/**
 * get_endianness - check system endianness
 *
 * Return: 0 endianness if big endian, 1 if endianness little endian
 */

int get_endianness(void)
{
	int k;
	char *c;

	k = 1;
	c = (char *)&k;

	return (*c);
}
