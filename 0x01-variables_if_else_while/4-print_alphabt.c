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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
			if (letter != 'q' && letter != 'e')
			{
				putchar(letter);
			}
	}
	putchar('\n');
	return (0);
}
