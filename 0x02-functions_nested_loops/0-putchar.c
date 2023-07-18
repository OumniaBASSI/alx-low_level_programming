#include "main.h"
/**
 * main - Print _putchar
 * Return: Always 0
 */
int main(void)
{
	char putchar_str[] = "_putchar";
	int i;

	for (i = 0; putchar_str[i] != '\0'; i++)
	{
		_putchar(putchar_str[i]);
	}
	_putchar('\n');
	return(0);
}
