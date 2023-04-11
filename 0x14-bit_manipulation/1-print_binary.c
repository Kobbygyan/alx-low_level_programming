#include "main.h"

/**
 * print_binary - Prints the binary representation of a given number.
 * @n: the decimal number to be converted to binary
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int i, num_bits = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			num_bits++;
		}
		else if (num_bits)
			_putchar('0');
	}
	if (!num_bits)
		_putchar('0');
}
