#include "main.h"
/**
 * print_sign - chek input if its positive, negative or zero
 * @n: variable to determine if input is greater than, less than or is zero
 * Retiurn: 0 if succesful
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n <0)
	{
		_putchar('-');
	}
	return (-1);
}
