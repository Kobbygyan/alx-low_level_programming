#include <stdio.h>

/**
 * main - char number combo
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	for (x = 48; x < 58; x++)
	{
		putchar (x);
		if (x != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	
	putchar ("\n");

	return (0);
}
