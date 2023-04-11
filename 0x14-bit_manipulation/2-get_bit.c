#include "main.h"

/**
 * get_bit - Returns the value of the bit at the given index in a binary number.
 * @n: The binary number whose bit value is to be retrieved
 * @index: The index of the bit to be retrieved, starting from the least significant bit at index 0
 *
 * Return: The value of the bit at the given index (0 or 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
