#include "main.h"
/**
 * swap_int - Entry Function
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int Ra;

	Ra = *a;
	*a = *b;
	*b = Ra;
}
