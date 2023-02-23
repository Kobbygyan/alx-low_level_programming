#include <stdio.h>

/**
 * main - Prints te first 98 Fibonacci numbers starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, sum;
	unsigned long n1_h1, n1_h2, n2_h1, n2_h2;
	unsigned long h1, h2;

	for (count = 0; count < 92; inc++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
	}
	n1_h1 = n1 / 10000000000;
	n2_h1 = n2 / 10000000000;
	n1_h2 = n1 % 10000000000;
	n2_h2 = n2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h1 = n1_h1 + n2_h1;
		h2 = n1_h2 + n2_h2;
		if ((n1_h2 + n2_h2) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");

		n1_h1 = n2_h1;
		n1_h2 = n2_h2;
		n2_h1 = h1;
		n2_h2 = h2;
	}
	printf("\n");
	return (0);
}
