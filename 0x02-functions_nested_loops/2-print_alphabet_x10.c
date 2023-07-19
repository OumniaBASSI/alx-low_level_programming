#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char letter;

	while (c < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		c++;
	}
}
