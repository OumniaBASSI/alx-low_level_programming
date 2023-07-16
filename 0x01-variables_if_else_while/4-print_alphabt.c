#include <stdio.h>
#include <unistd.h>
/**
 * main - Enrtry Point
 *
 *
 * Return: (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
			if ((c == 'q' || c == 'e') != 1)
				putchar(c);
	}
	putchar('\n');
	return (0);
}
