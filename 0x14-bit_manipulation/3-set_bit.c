#include "main.h"

/**
 * set_bit - sets a bit at a specified index to 1 in a decimal number.
 * @n: A pointer to the decimal number to modify
 * @index: The index of the bit to set to 1 (0 is the least significant bit)
 *
 * Return: 1 if the operation was successful, -1 if the index is out of range
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
