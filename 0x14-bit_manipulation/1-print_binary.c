#include "main.h"
/**
 * _power - to calculate (base and power)
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: the value of base and the power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number of prints
 * Return: void, no value
 */

void print_binary(unsigned long int n)
{
	unsigned long int division, result;
	char flg;

	flg = 0;
	division = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (division != 0)
	{
		res= n & division;
		if (res== division)
		{
			flg = 1;
			_putchar('1');

		}
		else if (flg == 1 || division == 1)
		{
			_putchar('0');
		}
		division >>= 1;
	}
}


