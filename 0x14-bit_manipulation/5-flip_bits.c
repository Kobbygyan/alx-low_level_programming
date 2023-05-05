#include "main.h"

/**
 * flip_bits - counts number of bits that need to be flipped in the
 *             first input integer in order to obtain the second input integer.
 * @n: The first input integer
 * @m: The second input integer
 *
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if ((xor & 1) == 1)
		{
			count++;
		}
		xor = xor >> 1;
	}
	return (count);
}
