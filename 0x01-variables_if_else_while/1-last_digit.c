#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last number of the variable n
 * @n: number to be checked
 * @mod: modulo of n/10
 *
 * Return: 0 
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod > 0 && mod <6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	else if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);

	return (0);
}
