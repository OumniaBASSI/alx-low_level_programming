#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description: This programe assigns a random number to the variable n each time it is executednand prints thae last digit of the number sorted in the variable n.
 * 
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d id %d ", n, lastDigit);

	if (lastDigit > 5)
		printf("and is greater than 5 \n");
	else if (lastDigit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");


	return (0);
}
