#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to be flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sox = n ^ m, count = 0;

	while (sox > 0)
	{
		count += (sox & 1);
		sox >>= 1;
	}

	return (count);
}
