#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long n1, n2, sum;
	int i;

	i = 0, n1 = 1, n2 = 2;
	printf("%lu, %lu", n1, n2);
	while ((i++) < 48)
	{
		sum = n1 + n2;
		printf(", %lu", sum);
		n1 = n2;
		n2 = sum;
	}
	putchar('\n');
	return (0);
}
