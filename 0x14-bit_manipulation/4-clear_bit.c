#include "main.h"

/**
 * clear_bit - returns the value of bit at specified index in a decimal number.
 *
 * @n: The decimal number to search
 * @index: The index of the bit to retrieve (0 is the least significant bit)
 * Return: 1 if success, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
