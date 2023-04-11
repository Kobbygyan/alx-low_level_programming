#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped to convert num1 to num2
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit_num = 0;
	unsigned long int current;
	unsigned long int xor_result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor_result >> i;
		if (current & 1)
			bit_num++;
	}

	return (bit_num);
}
