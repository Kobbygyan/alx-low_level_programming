#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as a string to an unsigned integer
 * @b: string representing the binary number
 *
 * Return: unsigned integer representing the decimal value of the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int my_decimal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		my_decimal = 2 * my_decimal + (b[i] - '0');
	}

	return (my_decimal);
}
