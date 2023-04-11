#include "main.h"

/**
 * clear_bit -  Sets the value of a bit to 0 at the given index
 * @n: Pointer to the binary number whose bit value is to be cleared
 * @index: The index of the bit to be cleared
 *
 * Return: -1 for failure, 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
