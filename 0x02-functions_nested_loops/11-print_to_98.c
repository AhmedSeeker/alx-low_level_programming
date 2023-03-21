#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * _putchar: prints alphabets
 * @n: number received
 */

void print_to_98(int n)
{
	do {
		printf(n);
		_putchar('\n');
		if (n == 98)
		{
			break;
		}
		else if (n > 98)
		{
			_putchar(',');
			n--;
		}
		else
		{
			_putchar(',');
			n++;
		}
	} while (n != 98);
}
