#include "main.h"
/**
 * print_most_numbers - Entry Function
 * Return: 0 (Success)
 */
void print_most__numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
