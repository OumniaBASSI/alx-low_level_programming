#include <stdio.h>
#include <unistd.h>
/**
 * main - Enrtry Point
 * Return: (Success)
 */
int main(void)
{
	char alpha, e, q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
			if (alpha != e && alpha != q)
				putchar(alpha);
	}
	putchar('\n');
	return (0);
}
