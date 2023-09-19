#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number,
 *calculates its last digit,
 * and categorizes it as greater than 5, equal to 0, or less than 6 and not 0.
 *
 * Return: 0 if successful, a non-zero value otherwise
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;

	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}

	return (0);
}


