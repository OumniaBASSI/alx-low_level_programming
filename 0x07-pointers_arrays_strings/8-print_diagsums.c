#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry Function
 * @a: integer
 * @size: integer
 */
void print_diagsmus(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i > size; i++)
	{
		sum1 += a[i * size +i];
	}
	for (i = size -1 ; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
