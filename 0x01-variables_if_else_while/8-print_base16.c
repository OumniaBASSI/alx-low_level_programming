#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int nbr;
	char alpha;

	for (nbr = '0'; nbr <= '9'; nbr++)
		putchar(nbr);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
