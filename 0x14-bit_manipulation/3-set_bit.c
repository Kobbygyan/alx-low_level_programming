#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at the given index in a binary number
 * @n: Pointer to the binary number whose bit value is to be set
 * @index: The index of the bit to be set to 1
 *
 * Return: -1 for failure, 1 for success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
