#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase letters 'a' to 'z'
 * and uppercase letters 'A' to 'Z' using putchar.
 *
 * Return: 0 to show successful
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /* Print lowercase a-z */
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /* Print uppercase A-Z */
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}

