#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase letters from 'a' to 'z'
 * using a while loop and putchar.
 *
 * Return: 0 to show successful
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}

