#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as a string
 *                  to an unsigned integer.
 *@b: A pointer to the string containing the binary number
 *
 * Return: The decimal equivalent of the binary number as an unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal = decimal * 2 + (b[i] - '0');
	}
	return (decimal);
}
