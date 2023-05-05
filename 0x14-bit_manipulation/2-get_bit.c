#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index in decimal number.
 * @n: The decimal number to search
 * @index: The index of the bit to retrieve (0 is the least significant bit)
 *
 * Return: The value (0 or 1) of the bit at the specified index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
