#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals of matrix
 *
 * @a: 2D array of integers (Matrix)
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}
			else if (i + j == size - 1)
			{
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
