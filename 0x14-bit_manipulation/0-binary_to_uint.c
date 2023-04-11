#include "main.h"

/**
 * binary_to_uint -it converts any binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	unsigned int num = 0;

	if (!b){
		return (0);
	}
	for (l = 0; b[l] != '\0'; l++)
	{
		if (b[l] != '0' && b[l] != '1'){
			return (0)
		}
	}
	for (l = 0; b[l] != '\0'; l++)
	{
		num <<= 1;
		if (b[l] == '1'){
			num += 1
		}
	}
	return (num);
}
