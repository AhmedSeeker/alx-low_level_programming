#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * starting from 0 with putchar
 * Return: 0 end of program
 */

int main(void)
{
	int i;

	for (i = 47; i <= 59; i++)
	{
		putchar(i);
		if (i != 59)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
