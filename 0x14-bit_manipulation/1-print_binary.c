#include "main.h"

/**
 * print_binary - prints the binary representation of an input integer
 *                to standard output.
 * @n: The input integer to print in binary
 */

void print_binary(unsigned long n)
{
	int i, num = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
